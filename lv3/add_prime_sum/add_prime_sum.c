/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccumming <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 12:49:57 by ccumming          #+#    #+#             */
/*   Updated: 2018/10/10 13:31:51 by ccumming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
			|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		num;
	int		sign;
	int		i;

	num = 0;
	sign = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		num = (num * 10) + (str[i++] - '0');
	return (num * sign);
}

void	ft_putnbr(int num)
{
	char	c;

	if (num < 0)
	{
		num = -num;
		write(1, "-", 1);
	}
	if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}

int		is_prime(int num)
{
	int		i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i <= (num / 2))
	{
		if (!(num % i))
			return (0);
		else
			i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		num;
	int		sum;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		sum = 0;
		printf("start num: %d\n", num);
		printf("is prime %d, yes: %d\n", num, is_prime(num));
		while (num > 0)
		{
			if (is_prime(num))
			{
				printf("sum: %d, num:%d\n", sum, num);
				sum += num;
			}
			num--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
