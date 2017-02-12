/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_nbrnletter.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:44:23 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:45:39 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_nbrnletter(void)
{
	char	*str;

	str[7] = "123def";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
