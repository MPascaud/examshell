/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 16:59:23 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/15 17:05:39 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		words;
	int		len;
	int		k;
	int		j;

	words = 0;
	i = 0;
	k = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			words++;
			while (str[i] != 32 && str[i] != '\n' && str[i] != '\t' && str[i])
			{
				i++;
			}
		}
		i++;
	}
	tab = (char**)malloc(sizeof(char*) * (words + 1));
	i = 0;
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			len = 0;
			while (str[i] != 32 && str[i] != '\n' && str[i] != '\t' && str[i])
			{
				len++;
				i++;
			}
			tab[k] = (char*)malloc(sizeof(char) * (len + 1));
			k++;
		}
		i++;
	}
	k = 0;
	i = 0;
	while (str[i] == 32 || str[i] == '\n' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			while (str[i] != 32 && str[i] != '\n' && str[i] != '\t' && str[i])
			{
				tab[k][j] = str[i];
				j++;
				i++;
			}
			tab[k][j] = '\0';
			j = 0;
			k++;
		}
		i++;
	}
	tab[k] = NULL;
	return (tab);
}

#include <stdio.h>

int		main(void)
{
	char	**tab;
	char	blabla[] = "ijBtHQ9zV0aN";
	tab = ft_split(blabla);
	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%d\n", tab[0].length);
//	printf("%s\n", tab[2]);
//	printf("%s\n", tab[3]);
//	printf("%s\n", tab[4]);
	return (0);
}
