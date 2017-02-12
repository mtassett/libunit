/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_run.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 22:20:55 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 05:50:34 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>

static void		print_line(const char *str)
{
	const char	*tmp;

	tmp = str;
	while (*tmp)
		++tmp;
	write(1, "\t> ", 3);
	write(1, str, tmp - str);
	write(1, " : ", 3);
}

static int		print_sig(int sig)
{
	if (sig == SIGSEGV)
		write(1, "\x1b[31m[SEGV]\n\x1b[0m", 16);
	else if (sig == SIGBUS)
		write(1, "\x1b[31m[BUSE]\n\x1b[0m", 16);
	else if (sig == SIGALRM)
		write(1, "\x1b[31m[TIME]\n\x1b[0m", 16);
	else
		write(1, "\x1b[31m[SIG]\n\x1b[0m", 15);
	return (sig);
}	

static int	print_result(int wstatus)
{
	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == EXIT_SUCCESS)
		{
			write(1, "\x1b[32m[OK]\n\x1b[0m", 14);
			return (EXIT_SUCCESS);
		}
		else
		{
			write(1, "\x1b[31m[KO]\n\x1b[0m", 14);
			return (EFAILURE);
		}
	}
	else if (WIFSIGNALED(wstatus))
		return (print_sig(WTERMSIG(wstatus)));
	else
		write(1, "\x1b[46m[WTF]\n\x1b[0m", 15);
	return (EWTF);
}

static void	unit_exec(t_unit *list)
{
	pid_t		pid;
	int			status;

	pid = fork();
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
		list->u_ret = EFORK;
	}
	else
		list->u_ret = print_result(status);
}

//Load test list, execute + print line and result
//return the number of failed tests
int		unit_run(t_unit *list, int *tot)
{
	int			ret;
	int			total;
	
	ret = 0;
	total = 0;
	while (list)
	{
		print_line(list->u_name);
		++total;
		unit_exec(list);
		if (list->u_ret != EXIT_SUCCESS)
			++ret;
		unit_log(list, 0);
		list = list->u_next;
	}
	*tot = *tot + total;
	return (ret);
}

