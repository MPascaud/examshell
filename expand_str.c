/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 13:39:53 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/13 14:30:24 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_expand_str(char *str)
{
	int		i;

	i = 0;
	if(str[i] == '\0')
	{
		write(1, "\n", 1);
		return ;
	}
	while (str[i] == 32 || str[i] == '\t')
		i++;
	while(str[i])
	{
		while (str[i] >= 33 && str[i] <= 126 && str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		if (str[i] == 32 || str[i] == '\t' || str[i] == '\0')
		{
			while ((str[i] == 32 || str[i] == '\t'))
			{
				i++;
			}
			if (str[i] != '\0')
			{
				write(1, "   ", 3);
			}
			else
			{
				write(1, "\n", 1);
				return ;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_expand_str(argv[1]);
	return (0);
}
