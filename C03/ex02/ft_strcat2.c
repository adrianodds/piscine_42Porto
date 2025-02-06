/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:22:07 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/30 13:17:34 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	get_size(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	lm;

	i = get_size(dest);
	j = 0;
	lm = get_size(src) + get_size(dest);
	while (i < lm)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[lm] = '\0';
	return (dest);
}
int	main(void)
{
	char	str[80] = "";

	printf("%s", ft_strcat(str, "by mario"));
	// printf("%s", str);
	return (0);
}
