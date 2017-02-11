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
#define GRN				"\x1b[32m"
#define RED				"\x1b[31m"
#define RST 			"\x1b[0m"
#define YLW				"\x1b[33m"
#define CYA				"\x1b[46m"
#define EFAILURE		-1
#define	EWTF			0x42
#define	EFORK			0x666
#define UNIT_TIMEOUT	42
#include <stdint.h>
#define UNIT_TOT(x)	((int)((x) >> 16))
#define UNIT_SUC(x)	((int)((x) & 0xFFFF))

typedef struct		s_unit
{
	const char		*u_name;
	int				(*u_test)(void);
	struct s_unit	*u_next;
	int				u_ret;
}					t_unit;


/*
** Add a test to the test list, return EXIT_FAILURE or EXIT_SUCCESS
*/
int					unit_load(t_unit **alst, const char *name, int (*f)(void));
void				unit_print(uint32_t result);

/*
** Run all the tests in list, and return the number of failed tests
** Total contain the number of test effectued, whatever is the result
*/
int					unit_run(t_unit *list, int *total);

/*
** print advanced result (Success/ fail [segv] [buse] [other sig]
** 
*/
int					unit_result(t_list *list, int total);


#endif
