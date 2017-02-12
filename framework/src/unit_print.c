/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:09:34 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 08:39:07 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include <unistd.h>
#include <stdio.h>

/*
** #include "../inc/libft.h" **
*/
static inline size_t	getnsiz(int n)
{
	size_t	r;

	r = 1;
	if (n >= 100000000)
	{
		r += 8;
		n /= 100000000;
	}
	if (n >= 10000)
	{
		r += 4;
		n /= 10000;
	}
	if (n >= 100)
	{
		r += 2;
		n /= 10;
	}
	if (n >= 10)
		++r;
	return (r);
}

static void				write_num(int i)
{
	char	buf[12];
	size_t	siz;
	size_t	len;
	size_t	cur;

	siz = getnsiz(i);
	len = siz;
	buf[siz--] = '\0';
	cur = 0;
	while (cur < len)
	{
		buf[siz--] = i % 10 + '0';

		i /= 10;
		++cur;
	}
	write(1, buf, len);
}

int						unit_print(uint32_t r)
{
	const int	total = UNIT_TOT(r);
	const int	fail = UNIT_TOT(r) - UNIT_SUC(r);
	int			ret;

	if (fail != 0)
	{
		write(1, RED, sizeof(RED) - 1);
		ret = -1;
	}
	else
	{
		write(1, GRN, sizeof(GRN) - 1);
		ret = 0;
	}
	write(1, "\nSuccess: ", 10);
	write_num(total - fail);
	write(1, " Fail: ", 7);
	write_num(fail);
	write(1, " Total: ", 8);
	write_num(total);
	write(1, "\n\x1b[0m", 5);
	unit_log(NULL, 1);
	return (ret);
}
