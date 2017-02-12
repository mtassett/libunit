/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_atoi_intmax.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:48:01 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:48:16 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_intmax(void)
{
	char	*str;

	str[20] = "2147483647";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
