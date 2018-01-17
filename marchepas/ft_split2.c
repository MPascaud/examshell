/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 16:23:14 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/16 17:06:44 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int		count_words(char *str)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] && str[i] != 32 && str[i] != '\n' && str[i] != '\t')
		{
			words++;
			while (str[i] && str[i] != 32 && str[i] != '\n' && str[i] != '\t')
				i++;
		}
		i++;
	}
	return (words);
}

char	**ft_split(char *str)
{
	int		i;
	char	**tab;
	int		len;
	int		k;
	int		j;

	i = 0;
	len = 0;
	k = 0;
	j = 0;
	tab = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
	while (str[i])
	{
		if (str[i] != 32 && str[i] != '\n' && str[i] != '\t')
		{
			while (str[i + len] && str[i + len] != 32 && str[i + len] != '\n' && str[i + len] != '\t')
				len++;
			tab[k] = (char*)malloc(sizeof(char) * (len + 1));
			j = 0;
			while (len > 0)
			{
				tab[k][j] = str[i];
				len--;
				j++;
				i++;
			}
			tab[k][j] = '\0';
			k++;
			len = 0;
		}
		if (str[i])
			i++;
	}
	tab[k] = NULL;
	return (tab);
}


#include <stdio.h>
int		main(void)
{
	char	**tab;
	char	blabla[] = "9sR";
	int		i;

	i = 0;
	tab = ft_split(blabla);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
