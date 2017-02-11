/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 02:09:34 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 02:15:25 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include "../inc/libft.h"

void	unit_print(uint32_t r)
{
	if (GET_TOT(r) != GET_SUC(r))
		printf("%sSuccess: %d, Failure: %d, Total: %d\n", RED, GET_SUC(r), GET_TOT(r) - GET_SUC(r), GET_TOT(r));
	else
		printf("%sSuccess: %d, Failure: %d, Total: %d\n", GRN, GET_SUC(r), GET_TOT(r) - GET_SUC(r), GET_TOT(r));
}
