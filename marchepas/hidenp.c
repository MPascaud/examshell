/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:01:38 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/29 19:25:07 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		hidenp(char *cherche, char *str)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (cherche[0] == '\0')
		return (1);
	while (str[i])
	{
		j = 0;
		if (cherche[j] == str[i])
		{
			k = i;
			while (cherche[j] == str[i])
			{
				i++;
				j++;
				if (cherche[j] == '\0')
					return (1);
			}
			i = k;
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{

	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (hidenp(argv[1], argv[2]) == 1)
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);
	return (0);
}
