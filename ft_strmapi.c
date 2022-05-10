/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 18:31:33 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/16 18:32:03 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nwstr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	nwstr = ft_strdup(s);
	if (nwstr == NULL)
		return (NULL);
	while (nwstr[i] != '\0')
	{
		nwstr[i] = f(i, nwstr[i]);
		i++;
	}
	return (nwstr);
}
