/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:34:04 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/08 19:10:26 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_sum(int a, int b);
int		ft_sub(int a, int b);
int		ft_div(int a, int b);
int		ft_mult(int a, int b);
int		ft_mod(int a, int b);

int		(*g_func[5])(int, int) = {
	ft_sum, ft_sub, ft_div, ft_mult, ft_mod};

#endif
