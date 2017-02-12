/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_atoi_intmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:47:27 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:47:40 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_intmin(void)
{
	char	*str;

	str[20] = "-2147483648";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
