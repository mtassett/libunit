/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 18:31:00 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "test.h"

int			atoi_test(const char *str)
{
	if (atoi(str) != ft_atoi(str))
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}

uint32_t	atoi_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "ATOI:\n", 6);
	unit_load(&test_list, "Atoi Nbr Ez", &atoi_nbr_ez);
	unit_load(&test_list, "Atoi Nbr Pos", &atoi_nbr_pos);
	unit_load(&test_list, "Atoi Nbr Neg", &atoi_nbr_neg);
	unit_load(&test_list, "Atoi Nbr INT_MIN", &atoi_nbr_intmin);
	unit_load(&test_list, "Atoi Nbr INT_MAX", &atoi_nbr_intmax);
	unit_load(&test_list, "Atoi Nbr 1", &atoi_nbr_1);
	unit_load(&test_list, "Atoi Nbr +1", &atoi_nbr_plus1);
	unit_load(&test_list, "Atoi Nbr -1", &atoi_nbr_minus1);
	unit_load(&test_list, "Atoi Nbr 16", &atoi_nbr_16);
	unit_load(&test_list, "Atoi Nbr 10", &atoi_nbr_10);
	unit_load(&test_list, "Atoi Nbr +10", &atoi_nbr_plus10);
	unit_load(&test_list, "Atoi Nbr -10", &atoi_nbr_minus10);
	unit_load(&test_list, "Atoi Nbr +100", &atoi_nbr_plus100);
	unit_load(&test_list, "Atoi Nbr -100", &atoi_nbr_minus100);
	unit_load(&test_list, "Atoi Nbr +1k", &atoi_nbr_plus1k);
	unit_load(&test_list, "Atoi Nbr -1k", &atoi_nbr_minus1k);
	unit_load(&test_list, "Atoi Nbr +10k", &atoi_nbr_plus10k);
	unit_load(&test_list, "Atoi Nbr -10k", &atoi_nbr_minus10k);
	unit_load(&test_list, "Atoi Nbr +100k", &atoi_nbr_plus100k);
	unit_load(&test_list, "Atoi Nbr -100k", &atoi_nbr_minus100k);
	unit_load(&test_list, "Atoi Nbr +1M", &atoi_nbr_plus1M);
	unit_load(&test_list, "Atoi Nbr -1M", &atoi_nbr_minus1M);
	unit_load(&test_list, "Atoi Nbr +10M", &atoi_nbr_plus10M);
	unit_load(&test_list, "Atoi Nbr -10M", &atoi_nbr_minus10M);
	unit_load(&test_list, "Atoi Nbr +100M", &atoi_nbr_plus100M);
	unit_load(&test_list, "Atoi Nbr -100M", &atoi_nbr_minus100M);
	unit_load(&test_list, "Atoi Nbr +1kM", &atoi_nbr_plus1kM);
	unit_load(&test_list, "Atoi Nbr -1kM", &atoi_nbr_minus1kM);

	unit_load(&test_list, "Atoi Nbr +10kM", &atoi_bignbr_plus10kM);
	unit_load(&test_list, "Atoi Nbr -10kM", &atoi_bignbr_minus10kM);
	unit_load(&test_list, "Atoi BigNbr 42", &atoi_bignbr_42);
	unit_load(&test_list, "Atoi BigNbr -42", &atoi_bignbr_minus42);
	unit_load(&test_list, "Atoi BigNbr +42", &atoi_bignbr_plus42);

	unit_load(&test_list, "Atoi 0", &atoi_zero);
	unit_load(&test_list, "Atoi +0", &atoi_zero_plus);
	unit_load(&test_list, "Atoi -0", &atoi_zero_minus);

	unit_load(&test_list, "Atoi Dbl Sign ++42", &atoi_dblsig_pp);
	unit_load(&test_list, "Atoi Dbl Sign --42", &atoi_dblsig_mm);
	unit_load(&test_list, "Atoi Dbl Sign +-42", &atoi_dblsig_pm);
	unit_load(&test_list, "Atoi Dbl Sign -+42", &atoi_dblsig_mp);

	unit_load(&test_list, "Atoi Strings abcdef", &atoi_str_abcdef);
	unit_load(&test_list, "Atoi Strings Spaces", &atoi_str_spaces);
	unit_load(&test_list, "Atoi Strings Char", &atoi_str_char);
	unit_load(&test_list, "Atoi Strings Hard", &atoi_str_hard);
	unit_load(&test_list, "Atoi Strings NumStr", &atoi_str_numstr);
	unit_load(&test_list, "Atoi Strings StrNum", &atoi_str_strnum);

	unit_load(&test_list, "Atoi Signs +", &atoi_sign_plus);
	unit_load(&test_list, "Atoi Signs -", &atoi_sign_minus);

	unit_load(&test_list, "Atoi Blanks Tabs", &atoi_blank_tab);
	unit_load(&test_list, "Atoi Blanks Empty", &atoi_blank_empty);
	unit_load(&test_list, "Atoi Blanks Null", &atoi_blank_null);
	
	unit_load(&test_list, "Atoi Raw DataNum", &atoi_raw_datanum);
	unit_load(&test_list, "Atoi Raw NumData", &atoi_raw_numdata);


	unit_load(&test_list, "Atoi Combos Comma", &atoi_combo_comma);
	unit_load(&test_list, "Atoi Combos SpaceNum", &atoi_combo_spacenum);
	unit_load(&test_list, "Atoi Combos SpaceStrNum", &atoi_combo_spacestrnum);
	unit_load(&test_list, "Atoi Combos TabStrNum", &atoi_combo_tabstrnum);
	unit_load(&test_list, "Atoi Combos SignStr", &atoi_combo_signstr);
	unit_load(&test_list, "Atoi Combos SignStrSpaceNum", &atoi_combo_signstrspacenum);
	unit_load(&test_list, "Atoi Combos BlanksNumSpace", &atoi_combo_blanknumspace);
	unit_load(&test_list, "Atoi Combos BlanksNumSpaceNum", &atoi_combo_blanknumspacenum);

	unit_load(&test_list, "Atoi Combos SpaceSignNum", &atoi_combo_spacesignnum);
	unit_load(&test_list, "Atoi Combos SpaceSignNum2", &atoi_combo_spacesignnum2);
	unit_load(&test_list, "Atoi Combos NumSignNum", &atoi_combo_numsignnum);
	unit_load(&test_list, "Atoi Combos NumSignNum2", &atoi_combo_numsignnum2);
	unit_load(&test_list, "Atoi Combos SpaceNumSpace", &atoi_combo_spacenumspace);
	unit_load(&test_list, "Atoi Combos SpaceDblSignNumSpace", &atoi_combo_spacedblsignnumspace);
	unit_load(&test_list, "Atoi Combos SpaceDblSignNumSpace2", &atoi_combo_spacedblsignnumspace2);
	unit_load(&test_list, "Atoi Combos CharNum", &atoi_combo_charnum);
	unit_load(&test_list, "Atoi Combos ", &atoi_combo_hard);
	unit_load(&test_list, "Atoi Combos ", &atoi_combo_hard2);
	unit_load(&test_list, "Atoi Combos ", &atoi_combo_hard3);
	
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}
