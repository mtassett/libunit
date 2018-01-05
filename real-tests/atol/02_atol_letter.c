/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_atoi_letter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:44:08 by nozanne           #+#    #+#             */
/*   Updated: 2017/12/26 15:31:22 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		atoi_letter(void)
{
	const char	str[] = "abcdef";

	if (memcmp(ft_atol(str), "0", 2) == 0)
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
