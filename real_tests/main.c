/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 13:25:22 by pscott            #+#    #+#             */
/*   Updated: 2018/12/02 17:54:36 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "launchers.h"

int	main(void)
{
	t_err_info	*info;
	int			ret;

	if (!(info = malloc(sizeof(t_err_info))))
		return (1);
	init_info(info);
	print_header();
	strlen_launcher(info);
	strjoin_launcher(info);
	print_score(info->err, info->total);
	ret = info->err ? -1 : 0;
	if (info)
		free(info);
	return (ret);
}
