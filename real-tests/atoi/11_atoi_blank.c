/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_atoi_blank.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:48:59 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:49:06 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_blank(void)
{
	char	*str;

	str[20] = "\t\t\t\t\t";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
