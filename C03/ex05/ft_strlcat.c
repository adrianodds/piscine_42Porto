/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:12:29 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/29 16:35:29 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_count(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	disp;

	i = 0;
	size_dest = ft_count(dest);
	size_src = ft_count(src);
	disp = size_dest - size;
	if (size <= size_dest)
		return (size_src + size);
	while (src[i] != 0 && disp < size - 1)
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = 0;
	return (size_dest + i);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
		char    ad[20] = "Adriano";
		char    name[] = "Adri";

		printf("%d\n", ft_strlcat(ad, name, 0));
		printf("%s\n", ad);
		//return (0);
		//printf("%ld\n", strlcat(ad, name, 0));
		//printf("%s\n", ad);

}*/
