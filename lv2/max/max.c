/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:18:03 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/09 15:49:21 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max_item(int *tab, unsigned int len)
{
	int		max;
	int		i;

	i = 0;
	if (!tab[i])
		return (0);
	else
	{
		max = tab[0];
		i = len - 1;
		while (i >= 0)
		{
			if (tab[i] > max)
				max = tab[i];
			i -= 1;
		}
	}
	return (max);
}
