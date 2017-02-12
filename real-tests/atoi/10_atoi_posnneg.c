/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_atoi_posnneg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:48:27 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:48:50 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_posnneg(void)
{
	char	*str;

	str[20] = "+-42";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
