/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 12:58:47 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/17 13:26:19 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + ((int)(str[i] - '0'));
		i++;
	}
	return (neg * result);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	tab_mult(int nb)
{
	int		i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(i * nb);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		nb;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	nb = ft_atoi(argv[1]);
	tab_mult(nb);
	return (0);
}
