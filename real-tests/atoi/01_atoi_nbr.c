/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 17:49:44 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_nbr_ez(void)
{
	const char	str[] = "012345";

	return (atoi_test(str));
}

int		atoi_nbr_pos(void)
{
	const char	str[] = "+987";

	return (atoi_test(str));
}

int		atoi_nbr_neg(void)
{
	const char	str[] = "-156";

	return (atoi_test(str));
}

int		atoi_nbr_intmin(void)
{
	const char	str[] = "-2147483648";

	return (atoi_test(str));
}

int		atoi_nbr_intmax(void)
{
	const char	str[] = "2147483647";

	return (atoi_test(str));
}

int		atoi_nbr_1(void)
{
	const char	str[] = "1";

	return (atoi_test(str));
}

int		atoi_nbr_plus1(void)
{
	const char	str[] = "+1";

	return (atoi_test(str));
}

int		atoi_nbr_minus1(void)
{
	const char	str[] = "-1";

	return (atoi_test(str));
}

int		atoi_nbr_10(void)
{
	const char	str[] = "10";

	return (atoi_test(str));
}

int		atoi_nbr_16(void)
{
	const char	str[] = "16";

	return (atoi_test(str));
}

int		atoi_nbr_plus10(void)
{
	const char	str[] = "+10";

	return (atoi_test(str));
}

int		atoi_nbr_minus10(void)
{
	const char	str[] = "-10";

	return (atoi_test(str));
}

int		atoi_nbr_plus100(void)
{
	const char	str[] = "+100";

	return (atoi_test(str));
}

int		atoi_nbr_minus100(void)
{
	const char	str[] = "-100";

	return (atoi_test(str));
}

int		atoi_nbr_plus1k(void)
{
	const char	str[] = "+1000";

	return (atoi_test(str));
}

int		atoi_nbr_minus1k(void)
{
	const char	str[] = "-1000";

	return (atoi_test(str));
}

int		atoi_nbr_plus10k(void)
{
	const char	str[] = "+10000";

	return (atoi_test(str));
}

int		atoi_nbr_minus10k(void)
{
	const char	str[] = "-10000";

	return (atoi_test(str));
}

int		atoi_nbr_plus100k(void)
{
	const char	str[] = "+100000";

	return (atoi_test(str));
}

int		atoi_nbr_minus100k(void)
{
	const char	str[] = "-100000";

	return (atoi_test(str));
}

int		atoi_nbr_plus1M(void)
{
	const char	str[] = "+1000000";

	return (atoi_test(str));
}

int		atoi_nbr_minus1M(void)
{
	const char	str[] = "-1000000";

	return (atoi_test(str));
}

int		atoi_nbr_plus10M(void)
{
	const char	str[] = "+10000000";

	return (atoi_test(str));
}

int		atoi_nbr_minus10M(void)
{
	const char	str[] = "-10000000";

	return (atoi_test(str));
}

int		atoi_nbr_plus100M(void)
{
	const char	str[] = "+100000000";

	return (atoi_test(str));
}

int		atoi_nbr_minus100M(void)
{
	const char	str[] = "-100000000";

	return (atoi_test(str));
}

int		atoi_nbr_plus1kM(void)
{
	const char	str[] = "+1000000000";

	return (atoi_test(str));
}

int		atoi_nbr_minus1kM(void)
{
	const char	str[] = "-1000000000";

	return (atoi_test(str));
}
