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

uint32_t	atoi_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "ATOI:\n", 6);
	unit_load(&test_list, "Atoi Nbr", &atoi_nbr);
	unit_load(&test_list, "Atoi Letter", &atoi_letter);
	unit_load(&test_list, "Atoi NbrNLetter", &atoi_nbrnletter);
	unit_load(&test_list, "Atoi Spaces", &atoi_spaces);
	unit_load(&test_list, "Atoi Negnbr", &atoi_negnbr);
	unit_load(&test_list, "Atoi Negsign", &atoi_negsign);
	unit_load(&test_list, "Atoi Possign", &atoi_possign);
	unit_load(&test_list, "Atoi Intmin", &atoi_intmin);
	unit_load(&test_list, "Atoi Intmax", &atoi_intmax);
	unit_load(&test_list, "Atoi PosNNeg", &atoi_posnneg);
	unit_load(&test_list, "Atoi Blank", &atoi_blank);
	unit_load(&test_list, "Atoi Zero", &atoi_zero);
	unit_load(&test_list, "Atoi Nothing", &atoi_nothing);
	unit_load(&test_list, "Atoi null", &atoi_null);
	unit_load(&test_list, "Atoi Hardtest", &atoi_hardtest);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
