/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 12:52:55 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/07 16:41:31 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ps;
	int		i;

	ps = (char*)s;
	i = 0;
	while (n-- > 0)
	{
		if ((unsigned char)ps[i] == (unsigned char)c)
			return (ps + i);
		i++;
	}
	return (NULL);
}
