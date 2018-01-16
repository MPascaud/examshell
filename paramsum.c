/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 17:40:15 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/15 14:59:55 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;

	i = 0;
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
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + '0');
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	while ((i + 1) < argc)
	{
		i++;
	}
	ft_putnbr(i);
	write(1, "\n", 1);
	if (argv[i])
		return (0);
	return (0);
}
