/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 11:56:33 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/07 16:38:54 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	char			*pdest;
	unsigned char	c_char;

	pdest = dest;
	c_char = (unsigned char)c;
	while (len--)
	{
		*pdest++ = c_char;
	}
	return (dest);
}
