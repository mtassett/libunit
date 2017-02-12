/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:51:45 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 09:07:51 by nozanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>

/*
** test a string with all characters code before '\0' **
*/

int	basic_test(void)
{
	char	str[256];
	int		c;

	c = 1;
	while (c <= 0xFF)
	{
		str[c - 1] = (char)c;
		++c;
	}
	str[255] = '\0';
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
