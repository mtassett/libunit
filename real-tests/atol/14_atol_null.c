/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14_atoi_null.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 21:28:09 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 21:29:36 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		atoi_null(void)
{
	const char	str[] = "NULL";

	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
