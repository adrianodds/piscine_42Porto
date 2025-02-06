/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:59:19 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/29 12:40:38 by adduarte         ###   ########.fr       */
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

void	ft_putnbr(long nb)
{
	int	num;
	int	neg;
	int	buffer[10];

	num = 0;
	neg = 0;
	ft_if_0(nb);
	if (nb < 0)
	{
		nb = -nb;
		neg = 1;
	}
	while (nb > 0)
	{
		buffer[num++] = (nb % 10) + '0';
		nb = nb / 10;
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
