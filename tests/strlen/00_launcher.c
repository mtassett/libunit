/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:30:49 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 01:56:30 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/libunit.h"

uint32_t	strlen_launcher(void)
{
	uint32_t	result;

	result = 0;
	printf("STRLEN:\n");
	result += load_test("Basic test", &basic_test);
	result += load_test("NULL test", &null_test);
	result += load_test("SEGV test", &segv_test);
	result += load_test("Big test", &big_test);
	return (result);
}

