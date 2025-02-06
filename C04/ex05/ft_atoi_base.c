/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:06:26 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/01 21:03:52 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check1(char *base, int r)
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
			if (base[i] == base[t] && r > 0)
				return (0);
			else if ((base[i] >= 9 && base[i] <= 13) || (base[i] == 32))
				return (0);
			t++;
		}
		i++;
		t = i + 1;
	}
	if (r > 0 && ft_strlen(base) < 2)
		return (0);
	return (1);
}

int	ft_val_count(char *str, char *base)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	if (!check1(base, 1))
		return (0);
	while (str[i])
	{
		if (str[i] == '-')
			a++;
		i++;
	}
	return (a);
}

long	ft_convert(char *str, char *base)
{
	int		i;
	int		j;
	long	number;

	j = 0;
	i = 0;
	number = 0;
	while (str[i])
	{
		if (check1(&str[i], 0))
		{
			j = 0;
			while (str[i] != base[j])
				j++;
			number = number * ft_strlen(base) + j;
		}
		i++;
	}
	return (number);
}

int	ft_atoi_base(char *str, char *base)
{
	int		a;
	long	number;

	a = ft_val_count(str, base);
	number = ft_convert(str, base);
	if (!check1(base, 1))
		return (0);
	if (a > 0)
		return (-number);
	return (number);
}

/*#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*base;

	str = "     +---59";
	base = "0123456789abcdef";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}*/
