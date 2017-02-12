/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:03:21 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 08:52:14 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/inc/libft.h"

int		null_test(void)
{
	if (ft_strlen(NULL))
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}
