/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 20:11:35 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/23 21:26:06 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "3askalskaj11sjkaArererRSFdldsWcQ";
	char *t = ft_strupcase(str);
	printf("%s", t);
}*/
