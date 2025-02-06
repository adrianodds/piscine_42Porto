/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:09:18 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/20 17:59:34 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_char(int n)
{
	write(1, &n, 1);
}

void	ft_comb_r(int n)
{
	int	div_rest;

	div_rest = n % 10 + '0';
	ft_put_char(div_rest);
}

void	ft_comb_i(int n)
{
	int	div_int;

	div_int = n / 10 + '0';
	ft_put_char(div_int);
}

void	ft_print_comb2(void)
{
	int	i;
	int	t;

	i = 0;
	while (i <= 98)
	{
		t = i + 1;
		while (t <= 99)
		{
			ft_comb_i(i);
			ft_comb_r(i);
			write(1, " ", 1);
			ft_comb_i(t);
			ft_comb_r(t);
			if (i < 98 || t < 99)
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			t++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
