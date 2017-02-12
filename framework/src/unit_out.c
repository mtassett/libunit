/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_out.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:09:34 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 02:15:25 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include <stdint.h>

uint32_t	unit_out(t_unit **first, int total, int fail)
{
	if (*first)
	{
		unit_free(*first);
		*first = NULL;
	}
	return ((unsigned)((unsigned short)total << 16 | (unsigned short)fail));
}
