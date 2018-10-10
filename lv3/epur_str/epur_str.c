/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 14:36:26 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/10 15:01:08 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (is_space(argv[1][i]) && i == 0)
				i++;
			else if (is_space(argv[1][i]) && is_space(argv[1][i - 1]))
				i++;
			else if (is_space(argv[1][i]) && !is_space(argv[1][i - 1]))
			{
				write(1, " ", 1);
				i++;
			}
			else if (!is_space(argv[1][i]))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
