/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 14:57:36 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/13 16:30:35 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <unistd.h>

int		main(int argc, char **argv)
{
	int		debut;
	int		fin;
	int		i;
	char	*str;

	i = 0;
	fin = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = argv[1];
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			debut = i;
			while (str[i] != 32 && str[i] != '\t' && str[i])
				i++;
			fin = i;
		}
		if (fin != 0)
			break ;
		i++;
	}
	while (str[i] == 32 || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			while (str[i] != 32 && str[i] != '\t' && str[i])
			{
				write(1, &str[i], 1);
				i++;
			}
			write(1, " ", 1);
		}
		if (str[i])
			i++;
	}
	while (debut < fin)
	{
		write(1, &str[debut], 1);
		debut++;
	}
	write(1, "\n", 1);
	return (0);
}
