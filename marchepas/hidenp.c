/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 19:33:26 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/16 19:41:26 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>


int		hidenp(char *cherche, char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{

	}
}

int		main(int argc, char **argv)
{

	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (hidenp(argv[1], argv[2]) == 1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
	return (0);
}
