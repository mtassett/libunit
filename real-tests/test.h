/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 21:34:19 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 18:33:06 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H
# include <string.h>
# include "libft.h"
# include "libunit.h"

uint32_t	atoi_launcher(void);
int			atoi_test(const char *str);

int		atoi_bignbr_42(void);
int		atoi_bignbr_minus10kM(void);
int		atoi_bignbr_minus42(void);
int		atoi_bignbr_plus10kM(void);
int		atoi_bignbr_plus42(void);
int		atoi_blank(void);
int		atoi_blank_empty(void);
int		atoi_blank_null(void);
int		atoi_blank_tab(void);
int		atoi_blank_whsp(void);
int		atoi_combo_blanknumspace(void);
int		atoi_combo_blanknumspacenum(void);
int		atoi_combo_charnum(void);
int		atoi_combo_comma(void);
int		atoi_combo_hard(void);
int		atoi_combo_hard2(void);
int		atoi_combo_hard3(void);
int		atoi_combo_numsignnum(void);
int		atoi_combo_numsignnum2(void);
int		atoi_combo_signstr(void);
int		atoi_combo_signstrspacenum(void);
int		atoi_combo_spacedblsignnumspace(void);
int		atoi_combo_spacedblsignnumspace2(void);
int		atoi_combo_spacenum(void);
int		atoi_combo_spacenumspace(void);
int		atoi_combo_spacesignnum(void);
int		atoi_combo_spacesignnum2(void);
int		atoi_combo_spacestrnum(void);
int		atoi_combo_tabnumstr(void);
int		atoi_combo_tabstrnum(void);
int		atoi_dblsig_pp(void);
int		atoi_dblsig_pm(void);
int		atoi_dblsig_mp(void);
int		atoi_dblsig_mm(void);
int		atoi_hardtest(void);
int		atoi_intmax(void);
int		atoi_intmin(void);
int		atoi_letter(void);
int		atoi_nbr_1(void);
int		atoi_nbr_10(void);
int		atoi_nbr_16(void);
int		atoi_nbr_ez(void);
int		atoi_nbr_intmax(void);
int		atoi_nbr_intmin(void);
int		atoi_nbr_minus1(void);
int		atoi_nbr_minus10(void);
int		atoi_nbr_minus100(void);
int		atoi_nbr_minus100M(void);
int		atoi_nbr_minus100k(void);
int		atoi_nbr_minus10M(void);
int		atoi_nbr_minus10k(void);
int		atoi_nbr_minus1M(void);
int		atoi_nbr_minus1k(void);
int		atoi_nbr_minus1kM(void);
int		atoi_nbr_neg(void);
int		atoi_nbr_plus1(void);
int		atoi_nbr_plus10(void);
int		atoi_nbr_plus100(void);
int		atoi_nbr_plus100M(void);
int		atoi_nbr_plus100k(void);
int		atoi_nbr_plus10M(void);
int		atoi_nbr_plus10k(void);
int		atoi_nbr_plus1M(void);
int		atoi_nbr_plus1k(void);
int		atoi_nbr_plus1kM(void);
int		atoi_nbr_pos(void);
int		atoi_nbrnletter(void);
int		atoi_negnbr(void);
//int		atoi_negneg(void);
int		atoi_negsign(void);
//int		atoi_negstr(void);
//int		atoi_negzero(void);
int		atoi_nothing(void);
int		atoi_null(void);
//int		atoi_plusneg(void);
//int		atoi_plusplus(void);
int		atoi_posnneg(void);
int		atoi_possign(void);
//int		atoi_poszero(void);
int		atoi_raw_datanum(void);
int		atoi_raw_numdata(void);
int		atoi_sign_minus(void);
int		atoi_sign_plus(void);
int		atoi_spaces(void);
//int		atoi_str(void);
int		atoi_str_abcdef(void);
int		atoi_str_char(void);
int		atoi_str_hard(void);
int		atoi_str_numstr(void);
int		atoi_str_spaces(void);
int		atoi_str_strnum(void);
//int		atoi_tab(void);
int		atoi_zero(void);
int		atoi_zero_minus(void);
int		atoi_zero_plus(void);

uint32_t	strlen_launcher(void);
int			strlen_basic(void);
int			strlen_char_bound(void);
int			strlen_size_bound(void);
int			strlen_dirty_buff(void);
int			strlen_null(void);
uint32_t	itoabase_launcher(void);
int			itoabase_zero(void);

uint32_t	strlen2_launcher(void);
int			strlen2_basic(void);
int			strlen2_char_bound(void);
int			strlen2_size_bound(void);
int			strlen2_dirty_buff(void);
int			strlen2_null(void);

uint32_t	getnsiz_launcher(void);
int			getnsiz_basic(void);
int			getnsiz_limit(void);
int			getnsiz_mid(void);

uint32_t	getunsiz_launcher(void);
int			getunsiz_basic(void);
int			getunsiz_limit(void);
int			getunsiz_mid(void);

uint32_t	strchr_launcher(void);
int			strchr_search_char(void);
int			strchr_space(void);
int			strchr_search_abs(void);

uint32_t	memcmp_launcher(void);
int			memcmp_basic_equal(void);
int			memcmp_basic_uneq(void);
int			memcmp_basic_siz(void);
int			memcmp_basic_siz2(void);
int			memcmp_med_equal(void);
int			memcmp_med_uneq(void);

#endif
