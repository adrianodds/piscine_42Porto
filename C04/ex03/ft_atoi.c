/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:03:03 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/01 21:00:44 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	number;
	int	less;
	int	i;

	number = 0;
	less = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			less++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	if (!(less % 2))
		return (number);
	return (-number);
}

/*#include <stdio.h>
int	main(void)
{
	char at[] = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(at));

	return (0);
}*/
