/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:15:09 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/22 17:26:01 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d ", a);
	printf("- %d", b);
}*/
