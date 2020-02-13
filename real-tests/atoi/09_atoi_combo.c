/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_atoi_combo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozanne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 20:48:01 by nozanne           #+#    #+#             */
/*   Updated: 2020/02/13 18:31:51 by mtassett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "test.h"

int		atoi_combo_comma(void)
{
	const char	str[] = "4,2";

	return (atoi_test(str));
}

int		atoi_combo_spacenum(void)
{
	const char	str[] = "      32                 ";

	return (atoi_test(str));
}

int		atoi_combo_spacestrnum(void)
{
	const char	str[] = "          abc444";

	return (atoi_test(str));
}

int		atoi_combo_tabstrnum(void)
{
	const char	str[] = "\taaa123";

	return (atoi_test(str));
}

int		atoi_combo_tabnumstr(void)
{
	const char	str[] = "\t444asd";

	return (atoi_test(str));
}

int		atoi_combo_numsignnum(void)
{
	const char	str[] = "4+2";

	return (atoi_test(str));
}

int		atoi_combo_numsignnum2(void)
{
	const char	str[] = "4-2";

	return (atoi_test(str));
}

int		atoi_combo_signstr(void)
{
	const char	str[] = "-hcSSF";

	return (atoi_test(str));
}

int		atoi_combo_signstrspacenum(void)
{
	const char	str[] = "+god 1";

	return (atoi_test(str));
}

int		atoi_combo_blanknumspacenum(void)
{
	const char	str[] = "\n   56 89";

	return (atoi_test(str));
}

int		atoi_combo_blanknumspace(void)
{
	const char	str[] = "\t\v\r445    ";

	return (atoi_test(str));
}

int		atoi_combo_spacesignnum(void)
{
	const char	str[] = "         -889";

	return (atoi_test(str));
}

int		atoi_combo_spacesignnum2(void)
{
	const char	str[] = "   +9000";

	return (atoi_test(str));
}

int		atoi_combo_spacenumspace(void)
{
	const char	str[] = "        \t\r\v\n 42 \n\n\r\t";

	return (atoi_test(str));
}

int		atoi_combo_spacedblsignnumspace(void)
{
	const char	str[] = "          +-42      ";

	return (atoi_test(str));
}

int		atoi_combo_spacedblsignnumspace2(void)
{
	const char	str[] = "          -+42    ";

	return (atoi_test(str));
}

int		atoi_combo_charnum(void)
{
	const char	str[] = "b45";

	return (atoi_test(str));
}

int		atoi_combo_hard(void)
{
	const char	str[] = "         \t       --s8";

	return (atoi_test(str));
}

int		atoi_combo_hard2(void)
{
	const char	str[] = "         \t    +  8";

	return (atoi_test(str));
}

int		atoi_combo_hard3(void)
{
	const char	str[] = "         \t       -   8";

	return (atoi_test(str));
}
