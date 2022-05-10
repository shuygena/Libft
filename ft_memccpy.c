/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:33:24 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/09 19:51:42 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;
	unsigned char	uc;
	int				i;

	i = 0;
	pdest = (unsigned char*)dest;
	psrc = (unsigned char*)src;
	uc = (unsigned char)c;
	if (dest == NULL && src == NULL)
		return (NULL);
	while ((n--) && (psrc[i] != uc))
	{
		pdest[i] = psrc[i];
		i++;
	}
	if (psrc[i] == uc)
	{
		pdest[i] = uc;
		return (pdest + i + 1);
	}
	return (NULL);
}
