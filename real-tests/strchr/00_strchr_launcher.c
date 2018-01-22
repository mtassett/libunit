/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strchr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:11:23 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 23:15:54 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "test.h"

uint32_t	strchr_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "STRCHR:\n", 8);
	unit_load(&test_list, "Strchr search char", &strchr_search_char);
	unit_load(&test_list, "Strchr space", &strchr_space);
	unit_load(&test_list, "Strchr search abs", &strchr_search_abs);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
