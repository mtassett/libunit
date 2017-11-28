/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_ft_strlen_null.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:43:52 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 21:46:51 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"
#include "test.h"

int		strlen_null(void)
{
	ft_strlen(NULL);
	return (EXIT_SUCCESS);
}
