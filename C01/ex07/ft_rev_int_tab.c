/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:05:04 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/23 10:55:19 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;

	a = 0;
	while (a < size / 2)
	{
		temp = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = temp;
		a++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	ar[] = {1, 2, 3, 4, 5};

	i = 0;
	ft_rev_int_tab(ar, 5);
	while (i < 5)
	{
		printf("%d", ar[i]);
		i++;
		if (i != 5)
		{
			printf("-");
		}
	}
	return (0);
}*/
