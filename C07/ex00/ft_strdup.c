/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 08:35:32 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/05 15:39:59 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		leng;
	char	*new;

	i = 0;
	leng = 0;
	while (src[leng])
		leng++;
	new = (char *)malloc(leng * sizeof(char));
	if (!new)
		return (0);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s\n",
		ft_strdup("abcdefg"));
}*/
