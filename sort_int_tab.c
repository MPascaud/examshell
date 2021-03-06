/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/29 19:45:22 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/29 20:13:08 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		croissant(int a, int b)
{
	return (a <= b);
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int					tmp;
	unsigned int		i;

	i = 0;
	while (i < (size - 1))
	{
		if (croissant(tab[i], tab[i + 1]) == 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}
