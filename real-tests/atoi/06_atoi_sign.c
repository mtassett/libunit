/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_atoi_sign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:46:43 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 17:57:13 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_sign_minus(void)
{
	const char	str[] = "-";

	return (atoi_test(str));
}

int		atoi_sign_plus(void)
{
	const char	str[] = "+";

	return (atoi_test(str));
}
