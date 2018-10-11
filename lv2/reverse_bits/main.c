/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 19:40:26 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/10 19:48:02 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
		int				i;
			unsigned char	bit;

				i = 8;
					while (i--)
							{
										bit = (octet >> i & 1) + '0';
												write(1, &bit, 1);
													}
}


unsigned char   reverse_bits(unsigned char octet)
{
		return  (((octet >> 0) & 1) << 7) | \
				(((octet >> 1) & 1) << 6) | \
				(((octet >> 2) & 1) << 5) | \
				(((octet >> 3) & 1) << 4) | \
				(((octet >> 4) & 1) << 3) | \
				(((octet >> 5) & 1) << 2) | \
				(((octet >> 6) & 1) << 1) | \
				(((octet >> 7) & 1) << 0);
}
int		main(void)
{
	char	c;

	c = 50;

	print_bits(c);
	write(1, "\n", 1);
	print_bits(reverse_bits(c));
	return (0);
}	
