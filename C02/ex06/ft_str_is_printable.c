/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:41:06 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/23 21:26:15 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!(str[i]))
		return (1);
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 127)
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	int	a;
	char str[] = "asalskqoskqsiqansja@@#7463€";

	a = ft_str_is_printable(str);
	printf("%d", a);
}*/
