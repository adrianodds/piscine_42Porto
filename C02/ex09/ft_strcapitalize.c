/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 22:53:20 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/25 23:47:02 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_simbol(char str)
{
	if ((str > 64 && str < 91) || (str > 96 && str < 123) || (str > 47
			&& str < 58))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (i == 0 && (str[i] >= 97 && str[i] <= 122))
		str[i] = str[i] - 32;
	else if (i == 0)
		str[i] = str[i];
	while (str[i])
	{
		if ((i > 0 && ft_is_simbol(str[i - 1])) && (str[i] >= 97
				&& str[i] <= 122))
			str[i] = str[i] - 32;
		else if (i > 0 && !ft_is_simbol(str[i - 1]) && str[i] >= 65
			&& str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	int i;
	i = 0;
	char c[] = "ola, Tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(c);
	printf("%s", c);

}*/
