/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_run.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 22:20:55 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 05:19:17 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

static void		print_line(const char *str)
{
	const char	*tmp;

	tmp = str;
	while (*tmp)
		++tmp;
	write(1, "\t> ", 3);
	write(fd_line, "\t> ", 3);
	write(1, str, tmp - str);
	write(fd_line, str, tmp - str);
	write(1, " : ", 3);
	write(fd_line, " : ", 3);
}

static int		print_sig(int sig, fd_file)
{
	if (sig == SIGTERM)
	{
		write(1, "\x1b[31m[SEGV]\n\x1b[0m", 15);
		write(fd_file, "[SEGV]", 7);
	else if (sig == SIGBUS)
	{
		write(1, "\x1b[31m[BUSE]\n\x1b[0m", 15);
		write(fd_file, "[BUSE]", 7);
	}
	else
	{
		write(1, "\x1b[31m[SIG]\n\x1b[0m", 14);
		write(fd_file, "[SIG]", 6);
	return (sig);
}	

static int	print_result(int wstatus, fd_file)
{
	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == EXIT_SUCCESS)
		{
			write(1, "\x1b[32m[OK]\n\x1b[0m", 14);
			write(fd_file, "[OK]", 5);
			return (EXIT_SUCCESS);
		}
		else
		{
			write(1, "\x1b[31m[KO]\n\x1b[0m", 14);
			write(fd_file, "[KO]", 5);
			return (EFAILURE);
		}
	}
	else if (WIFSIGNALED(wstatus))
		return (print_sig(WTERMSIG(wstatus), fd_file));
	else
	{
		write(1, "\x1b[46m[WTF]\n\x1b[0m", 15);
		write(fd_line, "[WTF]", 7);
	}
	return (EWTF);
}

static void	unit_exec(t_unit *list)
{
	pid_t		pid;
	int			status;
	int static 	fd_file;

	pid = fork();
	fd_file = open("./libunit_file", O_CREAT | O_RDWR);
	if (pid > 0) //father
		wait(&status);
	else if (pid == 0) //child
	{
		alarm(UNIT_TIMEOUT);
		exit(list->u_test());
	}
	if (pid == -1)
	{
		write(1, "\x1b[46m[Fork failed]\n\x1b[0m", 26);
		write(fd_file, "[Fork failed]", 14);
		list->u_ret = EFORK;
	}
	else
		list->u_ret = print_result(status, fd_file);
	close(fd_file);
}

//Load test list, execute + print line and result
//return the number of failed tests
int		unit_run(t_unit *list, int *tot)
{
	int		ret;

	ret = 0;
	while (list)
	{
		print_line(list->u_name);
		*tot = *tot + 1;
		unit_exec(list);
		if (list->u_ret != EXIT_SUCCESS)
			++ret;
		unit_log(list);
		list = list->u_next;
	}
	return (ret);
}

