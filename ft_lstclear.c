/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:20:29 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/19 17:21:31 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptlist;
	t_list	*ptnext;

	ptlist = *lst;
	if (del != NULL)
	{
		while (ptlist != NULL)
		{
			ptnext = ptlist->next;
			del(ptlist->content);
			free(ptlist);
			ptlist = ptnext;
		}
		*lst = NULL;
	}
}
