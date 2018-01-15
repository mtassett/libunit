/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strlen_size_bound.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 21:46:51 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"
#include "test.h"
//Non aligned for testig as much as possible case. 8191 give about 50k iteration
#define INCVAL	8191

int		strlen_size_bound(void)
{
	printf("Size_max: %llu\n", SIZE_MAX);
	char	*buf = malloc((size_t)(UINT32_MAX + 5000));
	size_t	i = 0;

	if (!buf)
		return (EXIT_FAILURE);
	bzero(buf, UINT32_MAX + 50000);
	if (ft_strlen(buf) != strlen(buf))
		return (EXIT_FAILURE);
	while (i < 128)
	{
		buf[i] = '1';
		if (ft_strlen(buf) != strlen(buf))
			return (EXIT_FAILURE);
		++i;
	}
	memset(buf, '1', UINT32_MAX - 1);
	if (ft_strlen(buf) != strlen(buf))
		return (EXIT_FAILURE);
	memset(buf + UINT32_MAX, '2', 40000);
	if (ft_strlen(buf) != strlen(buf))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
