/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:45:42 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/08 19:09:33 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int			ft_get_op(char *str)
{
	if (str[0] == '+')
		return (0);
	if (str[0] == '-')
		return (1);
	if (str[0] == '/')
		return (2);
	if (str[0] == '*')
		return (3);
	if (str[0] == '%')
		return (4);
	return (0);
}

int			main(int argc, char **argv)
{
	int		a;
	int		b;
	int		op;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = ft_get_op(argv[2]);
		printf("%d", g_func[op](a, b));
	}
	printf("\n");
	return (0);
}
