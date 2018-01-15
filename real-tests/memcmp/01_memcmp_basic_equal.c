/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_memcmp_basic_equal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 22:58:10 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 23:02:45 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		memcmp_basic_equal(void)
{
	const char	s1[] = "abc";
	const char	s2[] = "abcd";

	if (memcmp(s1, s2, 3) == ft_memcmp(s1, s2, 3))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
