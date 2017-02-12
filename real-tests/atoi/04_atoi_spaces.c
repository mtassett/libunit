/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_atoi_spaces.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:45:52 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 20:46:00 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		atoi_spaces(void)
{
	char	*str;

	str[7] = "     ";
	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
