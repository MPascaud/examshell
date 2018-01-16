/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 15:22:24 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/16 16:10:22 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int		ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nb = (nb * 10) + ((int)(str[i] - '0'));
		i++;
	}
	return (neg * nb);
}


int		is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	int		i;
	int		nb;
	int		result;

	i = 0;
	result = 0;
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	nb = ft_atoi(argv[1]);
	if (nb <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
	while (i <= nb)
	{
		if (is_prime(i) == 1)
			result += i;
		i++;
	}
	ft_putnbr(result);

	write(1, "\n", 1);
	return (0);
}
