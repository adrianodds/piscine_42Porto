/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:53:17 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/05 15:40:52 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	i = 0;
	size = (max - min);
	if (min >= max)
		return (0);
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	min;
	int	max;
	min = -10;
	max = -5;
	int 	*a = ft_range(min, max);
	i = 0;
		for (int i = 0; i < max - min; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
		free(a);
}*/
