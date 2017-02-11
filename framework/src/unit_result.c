/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_result.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 22:17:31 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 22:24:49 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

//Print result after unit_run runned the test
int	unit_result(t_unit *list, int total)
{


	while (list)
	{
		if (list->u_ret == EXIT_SUCCESS)
			++succ;
		else if (list->u_ret == -1)
			++fail;
		else if (list->u_ret == 11)
		{
			++segv;
			++fail;
		}
		else if (list->u_ret == 9)
		{
		}
	
