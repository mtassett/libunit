/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_atoi_nothing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 21:15:54 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 21:19:18 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		atoi_nothing(void)
{
	const char	str[] = "";

	if (ft_atoi(str) == atoi(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
