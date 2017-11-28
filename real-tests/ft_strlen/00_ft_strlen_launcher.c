/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 21:44:44 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../test.h"

uint32_t	ft_strlen_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "FT_STRLEN:\n", 6);
	unit_load(&test_list, "Strlen Basic:", &strlen_basic);
	unit_load(&test_list, "Strlen Char Boundaries:", &strlen_char_bound);
	unit_load(&test_list, "Strlen Size Boundaries", &strlen_size_bound);
	unit_load(&test_list, "Strlen Dirty Buffer:", &strlen_dirty_buff);
	unit_load(&test_list, "Strlen Null Protection:", &strlen_null);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
