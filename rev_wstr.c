/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 18:30:34 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/12 19:02:34 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inversion(char *str)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		while (str[i] >= 33 && str[i] <= 126 && i >= 0)
		{
			i--;
		}
		j = i + 1;
		while (str[j] != 32 && str[j] != '\t' && str[j])
		{
			write(1, &str[j], 1);
			j++;
		}
		if (i != -1)
			write(1, " ", 1);
		i--;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	ft_inversion(argv[1]);
	return (0);
}
