/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:57:46 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/12 16:53:36 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		length;

	i = 1;
	j = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
		}
		length = j;
		j--;
		while (j >= 0)
		{
			if (argv[i][j] >= 33 && argv[i][j] <= 126)
			{
				if (argv[i][j] >= 97 && argv[i][j] <= 122)
				{
					argv[i][j] -= 32;
				}
				j--;
				while (argv[i][j] != 32 && argv[i][j] != '\t' && argv[i][j])
				{
					if (argv[i][j] >= 65 && argv[i][j] <= 90)
						argv[i][j] += 32;
					j--;
				}
			}
			j--;
		}
		write(1, argv[i], length);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
