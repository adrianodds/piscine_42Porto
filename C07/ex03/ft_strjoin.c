/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 12:39:22 by adduarte          #+#    #+#             */
/*   Updated: 2025/02/05 15:30:37 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	calc_size(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 1;
	while (i < size)
	{
		total += ft_len(strs[i]);
		if (i < size - 1)
			total += ft_len(sep);
		i++;
	}
	return (total);
}

char	*copy_string(char *src, char *dest, int *t)
{
	int	j;

	j = 0;
	while (src[j])
	{
		dest[*t] = src[j];
		j++;
		(*t)++;
	}
	return (dest);
}

char	*copy_separator(char *sep, char *dest, int *t)
{
	int	j;

	j = 0;
	while (sep[j])
	{
		dest[*t] = sep[j];
		j++;
		(*t)++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		t;
	int		final;
	char	*concat;

	i = 0;
	t = 0;
	final = calc_size(size, strs, sep);
	concat = (char *)malloc(final * sizeof(char));
	if (!concat)
		return (0);
	while (i < size)
	{
		concat = copy_string(strs[i], concat, &t);
		if (i < size - 1)
			concat = copy_separator(sep, concat, &t);
		i++;
	}
	concat[t] = '\0';
	return (concat);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strings[] = {"Hello", "world", "!"};
	char	*ret;

	ret = ft_strjoin(3, strings, ", ");
	printf("%s\n", ret);
	free(ret);
	return (0);
}*/
