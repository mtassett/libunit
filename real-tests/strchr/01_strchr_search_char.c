/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strchr_search_char.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:04:51 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 23:08:32 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "test.h"

int		strchr_search_char(void)
{
	static char buf[] = "I am a fish.";

	if (ft_strchr(buf, 'f') == strchr(buf, 'f'))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
