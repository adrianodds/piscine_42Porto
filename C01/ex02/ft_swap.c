/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:47:07 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/22 17:29:48 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int	main(void)
{
	int	*a;
	int	*b;
	int	i;
	int	j;

	i = 100;
	j = 150;
	a = &i;
	b = &j;
	printf("Before %d - ", i);
	printf("%d\n", j);
	ft_swap(a, b);
	printf("After %d - ", i);
	printf("%d\n", j);
}*/
