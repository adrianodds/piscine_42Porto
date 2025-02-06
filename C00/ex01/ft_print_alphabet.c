/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:54:34 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/20 21:54:32 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)

{
	char a;

	a = 97;
	while (a <= 122)
	{
		write(1, &a, 1);
		a++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	returno 0;
}*/
