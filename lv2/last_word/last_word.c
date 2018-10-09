/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 09:19:55 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/09 11:14:44 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_separtor(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str != '\0')
	{
		len += 1;
		str += 1;
	}
	return (len);
}

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		while (i != 0 && is_separtor(argv[1][i]))
			i -= 1;
		while (!is_separtor(argv[1][i]) && argv[1][i])
			i -= 1;
		i += 1;
		while (argv[1][i] && !is_separtor(argv[1][i]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
