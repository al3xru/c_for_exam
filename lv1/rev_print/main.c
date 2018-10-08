/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 16:33:14 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/08 16:41:29 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

int		main(int argc, char **argv)
{
	int		s;

	if (argc == 2)
	{
		s = ft_strlen(argv[1]);
		while (s >= 0)
		{
			write(1, &argv[1][s], 1);
			s--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
