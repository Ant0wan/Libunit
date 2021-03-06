/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fw_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarthel <abarthel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:41:16 by abarthel          #+#    #+#             */
/*   Updated: 2018/11/08 18:54:50 by abarthel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*fw_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i] || !c) && (c >= 0 && c <= 127))
	{
		if (s[i] == c)
			return ((char*)&s[i]);
		++i;
	}
	return (0);
}
