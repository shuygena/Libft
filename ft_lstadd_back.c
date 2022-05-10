/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:21:05 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/18 18:21:24 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *plast_elem;

	if (*lst == NULL)
		*lst = new;
	else
	{
		plast_elem = ft_lstlast(*lst);
		plast_elem->next = new;
	}
}
