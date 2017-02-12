/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:43:26 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

uint32_t	atoi_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "ATOI:\n", 6);
	unit_load(&test_list, "Simple test", &atoi_simple_test);
	unit_load(&test_list, "Hard test", &atoi_hard_test);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
