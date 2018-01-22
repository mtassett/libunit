/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_memcmp_med_equal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:13:17 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 23:36:12 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		memcmp_med_equal(void)
{
	const char	s1[] = "abcdefghijklmnopqrsuvwxyz";
	const char	s2[] = "abcdefghijklmnopqrsuvwxyz";

	if (ft_memcmp(s1, s2, 16) == memcmp(s1, s2, 16))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
