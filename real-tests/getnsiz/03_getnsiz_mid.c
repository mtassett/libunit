/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_strlen_basic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by mtassett          #+#    #+#             */
/*   Updated: 2017/12/26 15:14:25 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		getnsiz_mid(void)
{
	if (ft_getnsiz(10) != 2 || ft_getnsiz(42) != 2
			|| ft_getnsiz(100) != 3 || ft_getnsiz(1000) != 4
			|| ft_getnsiz(10000) != 5 || ft_getnsiz(100000) != 6
			|| ft_getnsiz(1000000) != 7 || ft_getnsiz(10000000) != 8
			|| ft_getnsiz(100000000) != 9 || ft_getnsiz(1000000000) != 10)
		return (EXIT_FAILURE);
	if (ft_getnsiz(-10) != 3 || ft_getnsiz(-100) != 4 || ft_getnsiz(-1000) != 5
			|| ft_getnsiz(-10000) != 6 || ft_getnsiz(-100000) != 7
			|| ft_getnsiz(-1000000) != 8 || ft_getnsiz(-10000000) != 9
			|| ft_getnsiz(-100000000) != 10 || ft_getnsiz(-1000000000) != 11)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
