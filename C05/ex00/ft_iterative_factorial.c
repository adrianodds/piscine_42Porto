/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:52:01 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/03 18:40:44 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb)
	{
		nb--;
		if (nb != 0)
			i = i * nb;
	}
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(10));
}*/
