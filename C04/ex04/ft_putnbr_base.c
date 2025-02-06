/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 22:59:19 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/01 21:03:40 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_neg(int *ng)
{
	if (*ng)
	{
		write(1, "-", 1);
		*ng = 0;
	}
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check1(char *base)
{
	int	i;
	int	t;

	i = 0;
	t = 1;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[t])
		{
			if (base[i] == base[t])
				return (0);
			t++;
		}
		i++;
		t = i + 1;
	}
	if (str_len(base) < 2)
		return (0);
	return (1);
}

int	check2(long *nbr1, int *neg)
{
	if (*nbr1 == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (*nbr1 < 0)
	{
		*nbr1 = -(*nbr1);
		*neg = 1;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		num;
	int		neg;
	char	buffer[30];
	int		b;
	long	nbr1;

	b = str_len(base);
	num = 0;
	neg = 0;
	nbr1 = nbr;
	if (!check1(base))
		return ;
	if (check2(&nbr1, &neg))
		return ;
	check2(&nbr1, &neg);
	while (nbr1 > 0)
	{
		buffer[num++] = base[nbr1 % b];
		nbr1 /= b;
	}
	ft_neg(&neg);
	while (num)
		write(1, &buffer[--num], 1);
}

#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(-2147483648, "01");
	return (0);
}
