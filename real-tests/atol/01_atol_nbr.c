/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_atoi_nbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by nozanne           #+#    #+#             */
/*   Updated: 2017/12/26 15:30:37 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		atol_nbr(void)
{
	const char	str[] = "012345";

	if (memcmp(ft_atol(str), "12345", 6) == 0)
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
