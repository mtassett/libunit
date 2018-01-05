/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strlen_size_bound.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by mtassett          #+#    #+#             */
/*   Updated: 2017/12/20 18:58:03 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"
#include "test.h"
//Non aligned for testing as much as possible case. 8191 give about 50k iteration
#define INCVAL	8191

int		strlen2_size_bound(void)
{
	char	*buf = malloc(UINT64_MAX);
	__uint128_t		i = 0;
	__uint128_t		prev;

	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	while (i < 128)
	{
		buf[i] = '1';
		if (ft_strlen2(buf) != strlen(buf))
			return (EXIT_FAILURE);
		++i;
	}
	while (i <= UINT32_MAX)
	{
		prev = i;
		i += INCVAL;
		memset(buf + prev, '1', INCVAL);
		if (ft_strlen2(buf) != strlen(buf))
			return (EXIT_FAILURE);
	}
	memset(buf + i, '2', 1 << 20);
	i += (1 << 20);
	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	memset(buf + i, '3', SIZE_MAX - 1);
	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
