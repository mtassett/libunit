/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:51:45 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 01:03:13 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <strings.h>

//test a string with all characters code before '\0'
int basic_test(void)
{
	char	str[256];

	memset(str, 0x42, 256);
	for (int c = 1; c < 0xFF; ++c)
		str[c - 1] = (char)c;
	str[254] = (char)0xFF;
	str[255] = '\0';
	ft_print_memory(str, 256);
	if (ft_strlen(str) == strlen(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}

/*
** int main()
** {
**	if (basic_test() == EXIT_SUCCESS)
**		printf("OK\n");
**	else
**		printf("KO\n");
**	return (0);
**}
*/
