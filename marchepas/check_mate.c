/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_mate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 20:48:14 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/29 22:06:50 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <unistd.h>
#include <stdlib.h>

int		pionpawn(char *carre, int position, int cote)
{
	int		i;

	i = 0;
//	printf("calcul : %d\n, cote : %d\n", position % (cote + 1), cote);
//	if ((position % (cote + 1)) > cote)
	if (position > cote)
	{
		if ((position - (cote + 1) - 1 == 'K')
				|| (position - (cote + 1) + 1) == 'K')
			return (1);
	}
	return (0);
}


int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		cote;
	char	*carre;

	i = 1;
	j = 0;
	cote = 0;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][cote] != '\0')
		cote++;
	carre = (char*)malloc(sizeof(char) * ((cote + 1) * cote));
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			carre[k] = argv[i][j];
			k++;
			j++;
		}
		carre[k++] = '\n';
		i++;
	}
	printf("%s", carre);
	i = 0;
	while (carre[i])
	{
		if (carre[i] == 'P')
			if (pionpawn(carre, (i + 1), cote) == 1)
			{
				write(1, "Success\n", 8);
				return (0);
			}
		i++;
	}
	return (0);
}
