/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 14:56:27 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/12 15:28:36 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while ((argv[1])[i] == 32 || (argv[1])[i] == '\t')
		i++;
	while ((argv[1])[i] != '\0')
	{
		if ((argv[1])[i] == 32 || (argv[1])[i] == '\t')
		{
			while ((argv[1])[i] == 32 || (argv[1])[i] == '\t')
				i++;
			if ((argv[1])[i] != '\0')
				ft_putchar(' ');
			else
			{
				ft_putchar('\n');
				return (0);
			}
		}
		ft_putchar((argv[1])[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
