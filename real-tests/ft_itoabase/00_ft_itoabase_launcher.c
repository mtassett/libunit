/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_itoabase_launcher.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 18:46:38 by mtassett          #+#    #+#             */
/*   Updated: 2017/12/12 00:31:13 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../test.h"

uint32_t	itoabase_launcher(void)
{
	t_unit	*test_list;
	int		total;
	int		fail;

	test_list = NULL;
	total = 0;
	write(1, "FT_STRLEN:\n", 6);
	unit_load(&test_list, "Strlen Basic:", &strlen_basic);
	fail = unit_run(test_list, &total);
	return (unit_out(&test_list, total, fail));
}

void		itoabase_check(char *str, char *good)
{
	if (memcmp(str, good, strlen(good) + 1))
		exit(EXIT_FAILURE);
	free(str);
}
