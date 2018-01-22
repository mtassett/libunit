/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by nozanne           #+#    #+#             */
/*   Updated: 2017/12/26 15:16:29 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../test.h"

uint32_t	getnsiz_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "GETNSIZ:\n", 9);
	unit_load(&test_list, "getnsiz basics", &getnsiz_basic);
	unit_load(&test_list, "getnsiz limits", &getnsiz_limit);
	unit_load(&test_list, "getnsiz mid", &getnsiz_mid);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
