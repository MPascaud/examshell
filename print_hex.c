/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 18:39:47 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/15 20:50:16 by mpascaud         ###   ########.fr       */
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
	return (result * neg);
}

void	ft_putnbr_hex(int nb)
{
	char	*table;

	table = "0123456789abcdef";
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "80000000", 8);
			return ;
		}
		nb = -nb;
	}
	if (nb >= 16)
		ft_putnbr_hex(nb / 16);
	ft_putchar(table[nb % 16]);
}

int		main(int argc, char **argv)
{
	int		nb;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	nb = ft_atoi(argv[1]);
	ft_putnbr_hex(nb);
	ft_putchar('\n');
	return (0);
}
