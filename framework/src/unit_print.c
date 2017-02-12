/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:09:34 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 08:39:07 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

/*
** #include "../inc/libft.h" **
*/

void	unit_print(uint32_t r)
{
	if (UNIT_TOT(r) != UNIT_SUC(r))
		printf("%sSuccess: %d, Failure: %d, Total: %d\n", RED, UNIT_SUC(r),
				UNIT_TOT(r) - UNIT_SUC(r), UNIT_TOT(r));
	else
		printf("%sSuccess: %d, Failure: %d, Total: %d\n", GRN, UNIT_SUC(r),
				UNIT_TOT(r) - UNIT_SUC(r), UNIT_TOT(r));
}
