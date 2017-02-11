/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 01:20:29 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 02:09:08 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

int main(int ac, char **av)
{
	uint32_t	ret;

	ret = 0;
	ret += strlen_launcher();
	unit_print(ret);
	return (0);
}
