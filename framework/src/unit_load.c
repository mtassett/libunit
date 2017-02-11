/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 22:20:55 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 02:15:58 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include "../inc/libft.h"
#include <sys/wait.h>

static uint32_t	print_result(int wstatus)
{
	int		sig;

	if (WIFEXITED(wstatus))
	{
		if (WEXITSTATUS(wstatus) == EXIT_SUCCESS)
		{
			printf(GRN "[OK]\n" RST);
			return (0x10001);
		}
		else
			printf(RED "[KO]\n" RST);
	}
	else if (WIFSIGNALED(wstatus))
	{
		sig = WTERMSIG(wstatus);
		if (sig == SIGTERM)
			printf(RED "[SEGV]\n" RST);
		else if (sig == SIGBUS)
			printf(RED "[BUSE]\n" RST);
		else
			printf(YLW "[SIG %d]\n" RST, sig);
	}
	else
		printf(CYA "[WTF]\n" RST);
	return (0x10000);
}

//Load test_fun and check return value + print line and result
uint32_t		unit_load(const char *name, int (*test_fun)(void))
{
	int		ret;
	pid_t	pid;
	
	printf("\t> %s :", name);
	pid = fork();
	if (pid > 0) //father
		waitpid(-1, &ret, WUNTRACED); //TODO: check -1 and if arg needed (NOHANG?)
	else if (pid == 0) //child
		exit(test_fun());
	if (pid == -1)
		printf(CYA "[Fork failed]\n" RST);
	else
		return (print_result(ret));
	return (0x10000);
}

