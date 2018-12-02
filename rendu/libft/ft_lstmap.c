/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pscott <pscott@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:46:59 by pscott            #+#    #+#             */
/*   Updated: 2018/11/21 14:36:10 by pscott           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static t_list	*ft_realmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*tmp;

	tmp = f(lst);
	res = tmp;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = f(lst)))
		{
			free(tmp->next);
			return (NULL);
		}
		tmp = tmp->next;
	}
	return (res);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *start2;
	t_list *previous;
	t_list *tmp;

	if (!lst)
		return (NULL);
	tmp = ft_lstnew(lst->content, lst->content_size);
	start2 = tmp;
	previous = tmp;
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew(lst->content, lst->content_size);
		previous->next = tmp;
		previous = tmp;
		lst = lst->next;
	}
	return (ft_realmap(start2, f));
}
