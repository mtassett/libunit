/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strlen2_size_bound.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by mtassett          #+#    #+#             */
/*   Updated: 2018/01/22 19:07:16 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "../libft/inc/libft.h"
#include "test.h"
//Non aligned for testing as much as possible case.
#define INCVAL		(8191 << 8)
#define BUFFER_SIZ	256 * 1024 * 1024 + 1

int		strlen2_size_bound(void)
{
	char	*buf = malloc(BUFFER_SIZ);
	size_t	i = 0;

	bzero(buf, BUFFER_SIZ);
	if (!buf)
		return (EXIT_FAILURE);
	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	while (i < 128)
	{
		buf[i] = '1';
		if (ft_strlen2(buf) != strlen(buf))
			return (EXIT_FAILURE);
		++i;
	}
	memset(buf, '1', 25000);
	i += 25000;
	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	//8388608 <=> 8Mo
	memset(buf + 25000, '1', 8388608 - 25000);
	i = 8388608;
	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	//32Mo + 7
	memset(buf + 8388608, '1', 33554439 - 8388608);
	i = 33554439;
	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	//128Mo + 1
	memset(buf + 33554439, '1', 134217729 - 33554439);
	i = 134217729;
	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	//256Mo
	memset(buf + 134217729, '1', 268435456 - 134217729);
	i = 268435456;
	if (ft_strlen2(buf) != strlen(buf))
		return (EXIT_FAILURE);
	free(buf);
	return (EXIT_SUCCESS);
}
