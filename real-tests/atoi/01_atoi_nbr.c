/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:44:48 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_nbr(void)
{
	char	*str;

	str[7] = "012345";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
