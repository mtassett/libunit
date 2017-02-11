/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:03:21 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 01:04:29 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int null_test(void)
{
	if (ft_strlen(NULL))
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}
