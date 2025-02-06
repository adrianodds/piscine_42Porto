/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:49:21 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/05 18:48:25 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

/*#include <stdio.h>
int	main(void)
{
	char	dest[7];
	char	src[] = "Adriano";
	int i;
	i = 0;
	ft_strlcpy(dest, src, 7);
	printf("%s\n", dest);
	while(i < 7)
	{
		if(!(dest[i] != 0))
		{
			printf("%s\n", "Nulo!");
		}
		i++;
	}
}*/
