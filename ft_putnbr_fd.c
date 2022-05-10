/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskeleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 21:39:08 by mskeleto          #+#    #+#             */
/*   Updated: 2020/11/11 21:39:31 by mskeleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_nbr(int n, int count, int fd)
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
		write(fd, &d, 1);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	int		number;
	int		count;

	number = n;
	count = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (number < 0)
		{
			write(fd, "-", 1);
			number *= -1;
			n *= -1;
		}
		while (number > 0)
		{
			number = number / 10;
			count++;
		}
		print_nbr(n, count, fd);
	}
}
