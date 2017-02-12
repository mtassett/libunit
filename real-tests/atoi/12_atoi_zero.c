/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_atoi_zero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 21:15:09 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 21:15:27 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		atoi_zero(void)
{
	const char	str[] = "0";

	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
