/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 22:20:55 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 01:34:53 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
//#include "../inc/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

//Add a test to the test list, return EXIT_FAILURE or EXIT_SUCCESS
int		unit_load(t_unit **alst, const char *name, int (*test_fun)(void))
{
	t_unit	*new;
	t_unit	*tmp;

	if (!(new = malloc(sizeof(t_unit))))
		return (EXIT_FAILURE);
	new->u_name = name;
	new->u_test = test_fun;
	new->u_next = NULL;
	new->u_ret = 0xBADC0FFE;
	if (!*alst)
		*alst = new;
	else
	{
		tmp = *alst;
		while (tmp->u_next)
			tmp = tmp->u_next;
		tmp->u_next = new;
	}
	return (EXIT_SUCCESS);
}
