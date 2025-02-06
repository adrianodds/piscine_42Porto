/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 18:48:25 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/20 17:58:55 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	i;
	char	t;
	char	j;

	i = '0';
	while (i <= '7')
	{
		t = i + 1;
		while (t <= '8')
		{
			j = t + 1;
			while (j <= '9')
			{
				write(1, &i, 1);
				write(1, &t, 1);
				write(1, &j, 1);
				if (i != '7' || t != '8' || j != '9')
					write(1, ", ", 2);
				j++;
			}
			t++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
