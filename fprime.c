/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 13:18:37 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/16 14:47:03 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	decomposition(int nb)
{
	int		i;

	i = 2;
	if (nb == 1)
	{
		printf("1");
		return ;
	}
	while (nb > 1)
	{
		while (nb % i == 0)
		{
			printf("%d", i);
			nb = nb / i;
			if (nb > 1)
				printf("*");
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		nb;

	if (argc == 2)
	{
		nb = atoi(argv[1]);
		decomposition(nb);
	}
	printf("\n");
	return (0);
}
