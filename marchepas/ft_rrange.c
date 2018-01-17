/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 18:29:53 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/16 19:28:21 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rrange(int start, int end)
{
	int		*tab;
	int		i;
	int		size;

	i = 0;
	size = end - start;
	if (size < 0)
		size = -size;
	if(!(tab = (int*)malloc(sizeof(int) * (size + 1))))
		return (NULL);
	while (end != start)
	{
		tab[i] = end;
		i++;
		if (start < end)
			end--;
		else
			end++;
	}
	tab[i] = end;
	return (tab);
}
