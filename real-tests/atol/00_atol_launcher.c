/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by nozanne           #+#    #+#             */
/*   Updated: 2017/12/26 15:26:11 by mtassett         ###   ########.fr       */
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
	write(1, "ATOL:\n", 6);
	unit_load(&test_list, "Atol Nbr", &atol_nbr);
	unit_load(&test_list, "Atol Letter", &atol_letter);
	unit_load(&test_list, "Atol NbrNLetter", &atol_nbrnletter);
	unit_load(&test_list, "Atol Spaces", &atol_spaces);
	unit_load(&test_list, "Atol Negnbr", &atol_negnbr);
	unit_load(&test_list, "Atol Negsign", &atol_negsign);
	unit_load(&test_list, "Atol Possign", &atol_possign);
	unit_load(&test_list, "Atol Intmin", &atol_intmin);
	unit_load(&test_list, "Atol Intmax", &atol_intmax);
	unit_load(&test_list, "Atol PosNNeg", &atol_posnneg);
	unit_load(&test_list, "Atol Blank", &atol_blank);
	unit_load(&test_list, "Atol Zero", &atol_zero);
	unit_load(&test_list, "Atol Nothing", &atol_nothing);
	unit_load(&test_list, "Atol null", &atol_null);
	unit_load(&test_list, "Atol Hardtest", &atol_hardtest);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
