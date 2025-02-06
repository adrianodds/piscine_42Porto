/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:57:35 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/04 20:24:16 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if ((index == 1) || (index == 2))
		return (1);
	if (index <= 0)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(9));
}
