/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 21:34:19 by nozanne           #+#    #+#             */
/*   Updated: 2018/01/05 16:25:52 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
#define TEST_H
# include <string.h>
# include "libft.h"
# include "libunit.h"

uint32_t	atoi_launcher(void);
int			atoi_nbr(void);
int			atoi_letter(void);
int			atoi_nbrnletter(void);
int			atoi_spaces(void);
int			atoi_negnbr(void);
int			atoi_negsign(void);
int			atoi_possign(void);
int			atoi_intmin(void);
int			atoi_intmax(void);
int			atoi_posnneg(void);
int			atoi_blank(void);
int			atoi_zero(void);
int			atoi_nothing(void);
int			atoi_null(void);
int			atoi_hardtest(void);

uint32_t	strlen_launcher(void);
int			strlen_basic(void);
int			strlen_char_bound(void);
int			strlen_size_bound(void);
int			strlen_dirty_buff(void);
int			strlen_null(void);

uint32_t	strlen2_launcher(void);
int			strlen2_basic(void);
int			strlen2_char_bound(void);
int			strlen2_size_bound(void);
int			strlen2_dirty_buff(void);
int			strlen2_null(void);

uint32_t	getnsiz_launcher(void);
int			getnsiz_basic(void);
int			getnsiz_limit(void);
int			getnsiz_mid(void);

uint32_t	getunsiz_launcher(void);
int			getunsiz_basic(void);
int			getunsiz_limit(void);
int			getunsiz_mid(void);

#endif
