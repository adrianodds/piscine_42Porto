/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 09:40:29 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/05 15:42:23 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*new;

	i = 0;
	size = (max - min);
	new = *range;
	if (min >= max)
		return (0);
	new = (int *)malloc(size * sizeof(int));
	if (!new)
		return (-1);
	while (i < size)
	{
		(new)[i] = min;
		i++;
		min++;
	}
	*range = new;
	return (size);
}
/*#include <stdio.h>
int	main(void)
{
	int	i;
	int	*arr;
	int	size;
	int	min;
	int	max;

	min = -21;
	max = 10;
	size = ft_ultimate_range(&arr,min , max);
	i = 0;
	if (size < 1)
	{
		printf("%d\n", size);
		return (0);
	}
	for (int i = 0; i < size; i++) {
			printf("%d ", arr[i]);
		}
		printf("\n");

}*/
