/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_itoabase_base10.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 00:16:15 by mtassett          #+#    #+#             */
/*   Updated: 2017/12/12 00:41:52 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

int		itoabase_base10(void)
{
	itoabase_check(ft_itoabase(INT_MAX, 10), "2147483647");
	itoabase_check(ft_itoabase(INT_MAX - 10, 10), "2147483637");
	itoabase_check(ft_itoabase(INT_MIN + 10, 10), "-2147483638");
	itoabase_check(ft_itoabase(INT_MIN, 10), "-2147483648");
	for (int i = 1; i <= 16; i++)
	{
		char *new = itoa(i);
		itoabase_check(ft_itoabase(i, 10), new);
		free(new);
	}
	itoabase_check(ft_itoabase(255, 10), "255");
	itoabase_check(ft_itoabase(3200, 10), "3200");
	itoabase_check(ft_itoabase(-1, 10), "-1");
	itoabase_check(ft_itoabase(-255, 10), "-255");
	itoabase_check(ft_itoabase(65536, 10), "65536");
	itoabase_check(ft_itoabase(0, 10), "0");
	return (EXIT_SUCCESS);
}
