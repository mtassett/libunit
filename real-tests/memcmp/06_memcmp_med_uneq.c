/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_memcmp_med_uneq.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:13:17 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 23:23:49 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		memcmp_med_uneq(void)
{
	const char	s1[] = "abcdefghijklmnopqrsuvwxyz";
	const char	s2[] = "abcdefghijklmnpoqrsuvwxyz";

	if (ft_memcmp(s1, s2, 16) == memcmp(s1, s2, 16))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
