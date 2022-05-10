/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:58:55 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/23 20:30:32 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n)
{
	int		count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < -2000000000)
		return (10);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_convert_nbr(int n, int count, char *nbr)
{
	int		i;
	int		zero;
	char	d;

	i = count;
	zero = 1;
	d = n % 10 + 48;
	while (i-- > 1)
		zero *= 10;
	while (i++ <= count && (zero != 0))
	{
		d = n / zero + 48;
		n %= zero;
		zero /= 10;
		*nbr = d;
		nbr++;
	}
	*nbr = '\0';
}

char		*ft_itoa(int n)
{
	char	*nbr;
	int		count;
	int		plus;

	count = ft_count(n);
	plus = (n < 0);
	nbr = (char*)(malloc((count + 1 + plus) * (sizeof(char))));
	if (nbr == NULL)
		return (NULL);
	if (n == -2147483648)
		nbr = ft_memcpy(nbr, "-2147483648", 12);
	else
	{
		if (n < 0)
		{
			*nbr = '-';
			n *= -1;
		}
		ft_convert_nbr((n), count, (nbr + plus));
	}
	return (nbr);
}
