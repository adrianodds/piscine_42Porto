/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:44:12 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/29 17:04:07 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (!n)
		return (0);
	while ((s1[i]) && (s2[i]) && i < n - 1)
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{
	char			str1[] = "Munda";
	char			str2[] = "Mundo";
	unsigned int	i;

	i = 1;
	printf("%d\n", ft_strncmp(str1, str2, i));
	return (0);
}
