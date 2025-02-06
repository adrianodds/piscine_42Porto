/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:22:07 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/30 13:11:47 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (dest[i])
		i++;
	while (src[t])
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
	char	str1[20] = "";
	char	*str2;
	int		b;

	str2 = "Mundo!";
	printf("%s\n", ft_strcat(str1, str2));
	b = 0;
	return (0);
}
