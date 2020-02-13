/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_bignbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:44:08 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 17:47:53 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_bignbr_plus10kM(void)
{
	const char	str[] = "10000000000";

	return (atoi_test(str));
}

int		atoi_bignbr_minus10kM(void)
{
	const char	str[] = "-10000000000";

	return (atoi_test(str));
}

int		atoi_bignbr_42(void)
{
	const char	str[] = "00000000000000000042";

	return (atoi_test(str));
}

int		atoi_bignbr_minus42(void)
{
	const char	str[] = "-00000000000000000000000042";

	return (atoi_test(str));
}

int		atoi_bignbr_plus42(void)
{
	const char	str[] = "+00000000000000000000042";

	return (atoi_test(str));
}
