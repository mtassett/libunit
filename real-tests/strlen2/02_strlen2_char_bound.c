/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strlen_char_bound.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by mtassett          #+#    #+#             */
/*   Updated: 2017/12/20 18:51:37 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"
#include "test.h"

int		strlen2_char_bound(void)
{
	char	buf[UINT8_MAX + 2];

	for (size_t i = 0; i <= UINT8_MAX; i++)
		buf[i] = i;
	buf[0] = 'S';
	buf[UINT8_MAX + 1] = '\0'; 
	if (ft_strlen2(buf) == strlen(buf))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
