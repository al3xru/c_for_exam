/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 13:12:57 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/08 14:13:51 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		i;
	char	cur;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			cur = argv[1][i];
			if ((cur >= 'A' && cur <= 'Y') || (cur >= 'a' && cur <= 'y'))
				cur += 1;
			else if (cur == 'z' || cur == 'Z')
				cur -= 25;
			write(1, &cur, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
