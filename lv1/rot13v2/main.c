/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:31:01 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/08 15:56:15 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = (((argv[1][i] - 'a') + 13) % 26) + 'a';
				write(1, &c, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = (((argv[1][i] - 'A') + 13) % 26) + 'A';
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
