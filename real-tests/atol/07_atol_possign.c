/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_atoi_possign.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:47:08 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 21:12:06 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		atoi_possign(void)
{
	const char	str[] = "+";

	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
