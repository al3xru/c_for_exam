/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 08:46:22 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/11 08:53:27 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(char c)
{
	int		div;

	div = 128;
	while (div > 0)
	{
		if (c & div) 
		{
			write(1, "1", 1);
		}
		else
		{
			write(0, "0", 1);
		}
		div >>= 1;
	}
}

char	swap_bits(char c)
{
	return ((c >> 4) | (c << 4));
}

int		main(void)
{
	char	c;

	c = 2;

	print_bits(c);
	write(1, "\n", 1);
	print_bits(swap_bits(c));
	return (0);
}
