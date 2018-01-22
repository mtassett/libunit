/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:29 by mtassett          #+#    #+#             */
/*   Updated: 2017/12/11 17:28:37 by mtassett         ###   ########.fr       */
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
	ret += atoi_launcher();
	return (unit_print(ret));
}
