/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:46:14 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 17:55:05 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_str_abcdef(void)
{
	const char	str[] = "abcdef";

	return (atoi_test(str));
}

int		atoi_str_spaces(void)
{
	const char	str[] = "       ";

	return (atoi_test(str));
}

int		atoi_str_char(void)
{
	const char	str[] = "a";

	return (atoi_test(str));
}

int		atoi_str_hard(void)
{
	const char	str[] = "djskfjksdjf    -15sfkdjkf";

	return (atoi_test(str));
}

int		atoi_str_numstr(void)
{
	const char	str[] = "123def";

	return (atoi_test(str));
}

int		atoi_str_strnum(void)
{
	const char	str[] = "def123";

	return (atoi_test(str));
}
