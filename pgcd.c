/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 16:34:57 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/15 16:47:43 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int		pgcd(int i, int j)
{
	int		pgcd;
	int		k;

	k = 1;
	while (k <= i && k <= j)
	{
		if (i % k == 0 && j % k == 0)
		   pgcd = k;
		k++;
	}
	return (pgcd);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc != 3)
	{
		printf("%s", "\n");
		return (0);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", pgcd(i, j));
	return (0);
}
