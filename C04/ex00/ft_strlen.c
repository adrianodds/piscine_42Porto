/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:58:50 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/01 21:02:52 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (i);
	while (str[i])
		i++;
	return (i);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "ADRIANO";
	printf("%d\n", ft_strlen(str));
}*/
