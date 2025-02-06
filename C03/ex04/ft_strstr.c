/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:31:57 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/29 16:32:08 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;
	int	size;

	size = 0;
	i = 0;
	a = 0;
	if (!to_find[i])
		return (str);
	while (to_find[size])
		size++;
	while (str[i])
	{
		if (str[i] == to_find[a])
		{
			while (str[i + a] == to_find[a] && to_find[a] != '\0')
				a++;
			if (to_find[a] == '\0')
				return (&str[i]);
			a = 0;
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	ad[20] = "Adriano";
	char	name[] = "";

	printf("%s\n", ft_strstr(ad, name));
	return (0);
}*/
