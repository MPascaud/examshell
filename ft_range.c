/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:35:50 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/29 19:42:31 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
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
		tab[i] = start;
		i++;
		if (start < end)
			start++;
		else
			start--;
	}
	tab[i] = start;
	tab[i + 1] = 0;
	return (tab);
}
