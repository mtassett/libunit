/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memcmp_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 23:38:58 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "test.h"

uint32_t	memcmp_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "MEMCMP:\n", 8);
	unit_load(&test_list, "memcmp basic equal", &memcmp_basic_equal);
	unit_load(&test_list, "memcmp basic uneq", &memcmp_basic_uneq);
	unit_load(&test_list, "memcmp basic siz equal", &memcmp_basic_siz);
	unit_load(&test_list, "memcmp basic siz uneq", &memcmp_basic_siz2);
	unit_load(&test_list, "memcmp med equal", &memcmp_med_equal);
	unit_load(&test_list, "memcmp med uneq", &memcmp_med_uneq);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
