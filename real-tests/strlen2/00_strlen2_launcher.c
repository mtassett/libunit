/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by nozanne           #+#    #+#             */
/*   Updated: 2017/12/20 18:49:46 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../test.h"

uint32_t	strlen2_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "FT_STRLEN2:\n", 12);
	unit_load(&test_list, "Strlen2 Basic:", &strlen2_basic);
	unit_load(&test_list, "Strlen2 Char Boundaries:", &strlen2_char_bound);
	unit_load(&test_list, "Strlen2 Size Boundaries", &strlen2_size_bound);
	unit_load(&test_list, "Strlen2 Dirty Buffer:", &strlen2_dirty_buff);
	unit_load(&test_list, "Strlen2 Null Protection:", &strlen2_null);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
