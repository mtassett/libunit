/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_negnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:46:14 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 21:10:13 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		atoi_negnbr(void)
{
	const char	str[] = "-156";

	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
