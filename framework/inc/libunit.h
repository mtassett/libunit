/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 00:13:41 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/11 02:07:35 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H
#define GRN	"\x1b[32m"
#define RED	"\x1b[31m"
#define RST "\x1b[0m"
#define YLW	"\x1b[33m"
#define CYA	"\x1b[46m"
#include <stdint.h>
#define GET_TOT(x)	((int)((x) >> 16))
#define GET_SUC(x)	((int)((x) & 0xFFFF))

uint32_t	unit_load(const char *name, int (*f)(void));
void		unit_print(uint32_t result);

#endif
