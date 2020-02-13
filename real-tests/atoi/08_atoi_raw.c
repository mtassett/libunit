/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_atoi_raw.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:47:27 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 18:02:10 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_raw_datanum(void)
{
	const char	str[] = "\u200b223";

	return (atoi_test(str));
}

int		atoi_raw_numdata(void)
{
	const char	str[] = "223\u200b";

	return (atoi_test(str));
}
