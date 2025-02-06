/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:55:41 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/04 14:49:11 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_strswap(char **str, int i, int j)
{
	char	*temp;

	temp = str[i];
	str[i] = str[j];
	str[j] = temp;
}

void	ft_str_comp(char **str, int t)
{
	int	i;
	int	a;

	i = 0;
	t -= 1;
	if (t < 1)
		return ;
	while (i < t)
	{
		a = 0;
		while (a < t - i)
		{
			if (ft_strcmp(str[a], str[a + 1]) > 0)
			{
				ft_strswap(str, a, a + 1);
			}
			a++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc < 2)
	{
		return (1);
	}
	ft_str_comp(argv + 1, argc - 1);
	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
