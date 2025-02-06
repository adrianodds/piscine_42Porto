/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:15:43 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/03 18:43:36 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb == 1)
		return (nb);
	while (i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(16));
}
