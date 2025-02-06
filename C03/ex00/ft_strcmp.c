/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.pt      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 09:17:21 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/29 16:33:23 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *sl, char *s2)
{
	int	i;

	i = 0;
	while ((sl[i] || s2[i]))
	{
		if (!(sl[i] == s2[i]))
			return (sl[i] - s2[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char str1[] = "abc";
	char str2[] = "abc";
	printf("%d\n", ft_strcmp(str1, str2));
	return (0);
}*/
