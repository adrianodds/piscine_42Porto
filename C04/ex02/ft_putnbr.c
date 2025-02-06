/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:59:19 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/02 16:24:48 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_if_0(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
	}
}

void	ft_neg(int *ng)
{
	if (*ng)
	{
		write(1, "-", 1);
		*ng = 0;
	}
}

void	ft_putnbr(int nb)
{
	long	l;
	int		num;
	int		neg;
	int		buffer[10];

	num = 0;
	neg = 0;
	l = nb;
	ft_if_0(l);
	if (l < 0)
	{
		l = -l;
		neg = 1;
	}
	while (l > 0)
	{
		buffer[num++] = (l % 10) + '0';
		l = l / 10;
	}
	while (--num >= 0)
	{
		ft_neg(&neg);
		write(1, &buffer[num], 1);
	}
}

/*int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/
