/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_memcmp_basic_uneq.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:06:08 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 23:08:49 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		memcmp_basic_uneq(void)
{
	const char	s1[] = "abc";
	const char	s2[] = "abd";

	if (memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
