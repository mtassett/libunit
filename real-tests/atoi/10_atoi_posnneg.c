/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_atoi_posnneg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:48:27 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 21:13:59 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "text.h"

int		atoi_posnneg(void)
{
	const char	str[] = "+-42";

	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
