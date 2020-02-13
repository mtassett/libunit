/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:44:23 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 17:51:03 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_zero(void)
{
	const char	str[] = "0";

		return (atoi_test(str));
}

int		atoi_zero_plus(void)
{
	const char	str[] = "+0";

		return (atoi_test(str));
}

int		atoi_zero_minus(void)
{
	const char	str[] = "-0";

		return (atoi_test(str));
}
