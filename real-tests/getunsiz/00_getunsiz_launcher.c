/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by nozanne           #+#    #+#             */
/*   Updated: 2018/01/05 16:28:17 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../test.h"

uint32_t	getunsiz_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "GETUNSIZ:\n", 10);
	unit_load(&test_list, "getunsiz basics", &getunsiz_basic);
	unit_load(&test_list, "getunsiz limits", &getunsiz_limit);
	unit_load(&test_list, "getunsiz mid", &getunsiz_mid);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
