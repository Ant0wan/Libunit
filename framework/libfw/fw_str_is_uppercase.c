/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 21:17:17 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/14 13:05:30 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	fw_str_is_uppercase(char *s)
{
	if (!*s)
		return (1);
	while (*s >= 65 && *s <= 90)
	{
		++s;
		if (!*s)
			return (1);
	}
	return (0);
}
