/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:54:34 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/20 21:54:52 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	char a;

	a = 122;
	while (a >= 97)
	{
		write(1, &a, 1);
		a--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	returno 0;
}*/
