/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_atoi_dblsig.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:45:52 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 18:30:22 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_dblsig_pp(void)
{
	const char	str[] = "++42";

	return (atoi_test(str));
}

int		atoi_dblsig_mm(void)
{
	const char	str[] = "--42";

	return (atoi_test(str));
}

int		atoi_dblsig_pm(void)
{
	const char	str[] = "+-42";

	return (atoi_test(str));
}

int		atoi_dblsig_mp(void)
{
	const char	str[] = "-+42";

	return (atoi_test(str));
}
