/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memcmp_basic_siz.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:09:03 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 23:11:37 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		memcmp_basic_siz(void)
{
	const char	s1[] = "abcdef";
	const char	s2[] = "abcefg";

	if (ft_memcmp(s1, s2, 3) == memcmp(s1, s2, 3))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
