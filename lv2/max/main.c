/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 11:57:18 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/09 15:50:03 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max_item(int *tab, unsigned int len);

int		main(void)
{
	int 	tab[] = {1, 20, 5, 9, 1, 0, 2, 5};
	int		len;

	len = 8;
	printf("%d", max_item(tab, len));
	return (0);
}
