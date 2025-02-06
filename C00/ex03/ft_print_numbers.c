/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adduarte <adduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:54:34 by adduarte          #+#    #+#             */
/*   Updated: 2025/01/20 14:49:47 by adduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)

{
	int a;

	a = 48;
	while (a < 58)
	{
		write(1, &a, 1);
		a++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
