/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:29 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 19:02:11 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test.h"
#include <fcntl.h>

int		main(void)
{
	uint32_t	ret;

	ret = 0;
	ret += strlen_launcher();
	return (unit_print(ret));
}
