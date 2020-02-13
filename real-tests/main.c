/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:29 by mtassett          #+#    #+#             */
/*   Updated: 2020/02/13 18:37:38 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <fcntl.h>

int		main(void)
{
	uint32_t	ret;

	ret = 0;
	ret += atoi_launcher();
	ret += strlen_launcher();
	ret += strlen2_launcher();
	ret += getnsiz_launcher();
	ret += getunsiz_launcher();
	ret += strchr_launcher();
	ret += memcmp_launcher();
	return (unit_print(ret));
}
