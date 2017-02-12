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

	strlen_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;


	test_list = NULL;
	total = 0;
	write(1, "STRLEN:\n", 8);
	unit_load(&test_list, "Basic test", &basic_test);
	unit_load(&test_list, "NULL test", &null_test);
	unit_load(&test_list, "SEGV test", &segv_test);
	unit_load(&test_list, "Big test", &big_test);
	fail = unit_run(test_list, &total);
	return (unit_out(total, fail));
}

