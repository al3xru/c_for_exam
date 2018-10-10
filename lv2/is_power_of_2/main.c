/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 12:04:05 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/10 12:13:51 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		is_power_of_2(unsigned int n)
{
	return ((n & (-n)) == n ? 1 : 0);
}

int		main(int argc, char **argv)
{
	if (argc == 2) 
	{
		printf("%d", is_power_of_2(atoi(argv[1])));
	}
	return (0);
}

