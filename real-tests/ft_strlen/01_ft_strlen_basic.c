/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_strlen_basic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 21:46:51 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "test.h"

int		strlen_basic(void)
{
	const char	str[] = "012345";

	if (ft_strlen(str) == strlen(str))
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}
