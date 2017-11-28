/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ft_strlen_dirty_buff.c                          :+:      :+:    :+:   */
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

int		strlen_dirty_buff(void)
{
	char	buf[32];

	memset(buf, '1', 32);
	for (uint_fast8_t i = 1; i <= 16; i++)
	{
		memset(buf + 1, '\0', i);
		if (ft_strlen(buf) != strlen(buf))
			return (EXIT_FAILURE);
	}
	memset(buf, '1', 32);
	for (uint_fast8_t i = 1; i <= 16; i++)
	{
		memset(buf + 8, '\0', i);
		if (ft_strlen(buf) != strlen(buf))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
