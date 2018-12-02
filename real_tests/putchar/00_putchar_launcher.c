/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putchar_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 18:07:44 by abarthel          #+#    #+#             */
/*   Updated: 2018/12/02 18:31:31 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "putchar.h"

int	putchar_launcher(t_err_info *info)
{
	t_unit_test *testlist;

	testlist = NULL;
	fw_putendl("\nPUTCHAR\n");
	load_test(&putchar_basic, &testlist, "basic_test", 0);
	return (launch_test(&testlist, info));
}
