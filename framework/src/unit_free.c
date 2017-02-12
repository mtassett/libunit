/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:09:34 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 06:40:28 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include <stdlib.h>

void	unit_free(t_unit *unit)
{
	t_unit	*tmp;
	t_unit 	*list;

	list = unit;
	while (list)
	{
		if (list->u_next)
			tmp = list->u_next;
		else
			tmp = NULL;
		free(list);
		list = tmp;
	}
}
