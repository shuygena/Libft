/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:52:06 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/19 17:52:41 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*elem;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	if (!(elem = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&elem, del);
		return (NULL);
	}
	lst = lst->next;
	list = elem;
	while (lst)
	{
		if (!(elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&list, elem);
		lst = lst->next;
	}
	return (list);
}
