/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_atoi_blanks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:47:08 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 18:35:50 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_blank_tab(void)
{
	const char	str[] = "\t\t\t\t";

	return (atoi_test(str));
}

int		atoi_blank_empty(void)
{
	const char	str[] = "";

	return (atoi_test(str));
}

int		atoi_blank_null(void)
{
	const char	*str = NULL;

	return (atoi_test(str));
}

int		atoi_blank_whsp(void)
{
	const char	str[] = "\t\r\v";

	return (atoi_test(str));
}
