/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:22:07 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/29 16:32:30 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	t;

	i = 0;
	t = 0;
	if (i == nb)
		return (dest);
	while (dest[i])
		i++;
	while (src[t] && t < nb)
	{
		dest[i] = src[t];
		t++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	str1[20] = "Hello";
	char	str2[] = "Adelle";

	ft_strncat(str1, str2, 8);
	printf("%s\n", str1);
	return (0);
}
