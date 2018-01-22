/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_log.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 16:44:43 by mtassett          #+#    #+#             */
/*   Updated: 2017/11/28 20:25:07 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

static inline size_t	unit_strlen(const char *str)
{
	const char	*tmp;

	tmp = str;
	while (*tmp)
		++tmp;
	return (tmp - str);
}

static inline void		write_result(int res, int fd)
{
	if (res == EXIT_SUCCESS)
		write(fd, " [OK]\n", 6);
	else if (res == -1)
		write(fd, " [KO]\n", 6);
	else if ((unsigned)res == (unsigned)0xBADC0FFE)
		write(fd, " [INIT]\n", 8);
	else if (res == EWTF)
		write(fd, " [WTF]\n", 7);
	else if (res == EFORK)
		write(fd, " [FORK]\n", 8);
	else if (res > 0)
	{
		if (res == SIGSEGV)
			write(fd, " [SEGV]\n", 8);
		else if (res == SIGBUS)
			write(fd, " [BUSE]\n", 8);
		else if (res == SIGALRM)
			write(fd, " [TIME]\n", 8);
		else
			write(fd, " [SIG]\n", 7);
	}
	else
		write(fd, "\n", 1);
}

/*
** Write the current unit result in file.
** The fd is opened once and keeped until it's reset.
*/
void					unit_log(t_unit *unit, int reset)
{
	static int	fd = 0;

	if (reset && fd > 0)
	{
		write(fd, "\n", 1);
		close(fd);
		fd = 0;
		return ;
	}
	if (fd == 0)
	{
		if ( -1 == (fd = open("./libunit.log", O_CREAT | O_RDWR | O_APPEND, 0600)))
		{
				fd = 0;
				return ;
		}
	}
	write(fd, unit->u_name, unit_strlen(unit->u_name));
	write_result(unit->u_ret, fd);
}
