/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_atoi_negnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:46:14 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:46:31 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_negnbr(void)
{
	char	*str;

	str[7] = "-156";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
