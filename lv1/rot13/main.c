/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 10:50:12 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/08 10:58:57 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	char	sym_up;
	char	sym_down;

	i = 0;
	if (argc == 2) 
	{
		while (argv[1][i])
		{
			sym_up = argv[1][i] + 13;
			sym_down = argv[1][i] - 13;
			if (('A' <= argv[1][i] && 'M' >= argv[1][i])
					|| ('a' <= argv[1][i] && 'm' >= argv[1][i]))
					write(1, &sym_up, 1);
			else if (('N' <= argv[1][i] && 'Z' >= argv[1][i])
					|| ('n' <= argv[1][i] && 'z' >= argv[1][i]))
					write(1, &sym_down, 1);
			else
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
