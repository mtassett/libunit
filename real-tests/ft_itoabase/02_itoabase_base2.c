/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_itoabase_base2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 00:16:15 by mtassett          #+#    #+#             */
/*   Updated: 2017/12/12 05:14:55 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		itoabase_base2(void)
{
	const char *const *tab = { "0", "1", "10", "11", "100", "101", "110", "111",
		"1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111", "10000" };
	itoabase_check(ft_itoabase(INT_MAX, 2), "1111111111111111111111111111111");
	itoabase_check(ft_itoabase(INT_MAX - 2, 2), "1111111111111111111111111111101");
	itoabase_check(ft_itoabase(INT_MIN + 2, 2), "11111111111111111111111111111101");
	itoabase_check(ft_itoabase(INT_MIN, 2), "11111111111111111111111111111111");
	for (int i = 0; i <= 16; i++)
		itoabase_check(ft_itoabase(i, 2), tab[i]);
	itoabase_check(ft_itoabase(255, 2), "11111111");
	itoabase_check(ft_itoabase(32000, 2), "111110100000000");
	itoabase_check(ft_itoabase(-1, 2), "-1");
	itoabase_check(ft_itoabase(-255, 2), "-255");
	itoabase_check(ft_itoabase(65536, 2), "65536");
	return (EXIT_SUCCESS);
}
