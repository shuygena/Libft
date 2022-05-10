/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:42:44 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/07 16:41:05 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdest;
	char		*l_pdest;
	const char	*l_psrc;
	const char	*psrc;

	pdest = (char *)dst;
	psrc = (const char*)src;
	l_pdest = pdest + (len - 1);
	l_psrc = psrc + (len - 1);
	if (pdest < psrc)
		while (len--)
			*pdest++ = *psrc++;
	if (pdest > psrc)
		while (len--)
			*l_pdest-- = *l_psrc--;
	return (dst);
}
