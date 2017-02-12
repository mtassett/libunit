/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtassett <mtassett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:42:04 by mtassett          #+#    #+#             */
/*   Updated: 2017/02/12 20:43:43 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <stdint.h>

uint32_t	strlen_launcher(void);
int			basic_test(void);
int			null_test(void);
int			segv_test(void);
int			big_test(void);
int			buserror(void);
int			timeout_test(void);

#endif
