/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_strlen_basic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by mtassett          #+#    #+#             */
/*   Updated: 2018/01/05 16:23:21 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		getunsiz_mid(void)
{
	if (ft_getunsiz(10) != 2 || ft_getunsiz(42) != 2
			|| ft_getunsiz(100) != 3 || ft_getunsiz(1000) != 4
			|| ft_getunsiz(10000) != 5 || ft_getunsiz(100000) != 6
			|| ft_getunsiz(1000000) != 7 || ft_getunsiz(10000000) != 8
			|| ft_getunsiz(100000000) != 9 || ft_getunsiz(1000000000) != 10)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
