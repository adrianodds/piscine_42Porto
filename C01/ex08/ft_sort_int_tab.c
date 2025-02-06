/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:48:28 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/22 16:55:33 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	j;

	a = 0;
	while (a < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		a++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int	tab[] = {56,58,98,221,54,5,6,56,59,87,98,59,565,665,112,554};
	ft_sort_int_tab(tab, 16);
	i = 0;
	while (i < 16)
	{
		printf("%d", tab[i]);
		printf(" ");
		i++;
	}
}*/
