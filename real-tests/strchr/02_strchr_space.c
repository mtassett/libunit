/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strchr_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:09:13 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 23:09:58 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "test.h"

int		strchr_space(void)
{
	static char buf[] = "I am a fish.";

	if (ft_strchr(buf, ' ') == strchr(buf, ' '))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
