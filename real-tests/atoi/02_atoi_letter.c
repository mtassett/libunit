/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_letter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:44:08 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:45:00 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_letter(void)
{
	char	*str;

	str[7] = "abcdef";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
