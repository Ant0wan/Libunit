/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:46:13 by pscott            #+#    #+#             */
/*   Updated: 2018/11/21 13:08:41 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_joinhelper(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	return (NULL);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*r;
	size_t		i;
	size_t		j;

	if (s1 && s2)
	{
		if (!(r = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		i = 0;
		while (s1[i])
		{
			r[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
		{
			r[i] = s2[j];
			i++;
			j++;
		}
		return (r);
	}
	return (ft_joinhelper(s1, s2));
}
