/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strchr_search_abs.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:10:38 by nozanne           #+#    #+#             */
/*   Updated: 2017/02/12 23:10:46 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "test.h"

int		strchr_search_abs(void)
{
	static char buf[] = "I am a fish.";

	if (ft_strchr(buf, 'x') == strchr(buf, 'x'))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
