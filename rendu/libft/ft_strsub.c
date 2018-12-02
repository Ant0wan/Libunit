/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 17:16:16 by pscott            #+#    #+#             */
/*   Updated: 2018/11/21 12:55:42 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (s)
	{
		if (!(res = ft_strnew(len)))
			return (NULL);
		i = 0;
		while (len)
		{
			res[i] = s[start + i];
			i++;
			len--;
		}
		return (res);
	}
	return (NULL);
}
