/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_atoi_blank.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:48:59 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 21:14:30 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		atoi_blank(void)
{
	const char	str[] = "\t\t\t\t\t";

	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
