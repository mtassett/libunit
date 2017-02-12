/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:29 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 02:29:09 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"
#include <fcntl.h>

int main(int ac, char **av)
{
	uint32_t	ret;

	fd_file = open("./libunit.file", O_RDWR | O_CREAT);
	ret = 0;
	ret += strlen_launcher();
	unit_print(ret);
	return (0);
}
