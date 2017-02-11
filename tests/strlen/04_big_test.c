/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_big_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:15:34 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 01:19:51 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include "../../inc/libft.h"

int	big_test(void)
{
	char str[(size_t)0xFFFFFFFFF0];

	memset(str, 'A', UINT32_MAX + 0xF);
	if (ft_strlen(str) == strlen(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
