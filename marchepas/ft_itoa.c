/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 14:27:21 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/17 17:56:47 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_rev(char *str)
{
	char	lettre;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (i < (len / 2))
	{
		lettre = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = lettre;
		i++;
	}
	return (str);
}

char	*ft_itoa(int nbr)
{
	char	*blabla;
	int		i;
	int		nb;
	int		pwr;
	int		neg;

	neg = 0;
	if (nbr < 0)
		neg = 1;
	i = nbr;
	pwr = 0;
	if (i == 0)
		i = 1;
	while (i != 0)
	{
		i /= 10;
		pwr++;
	}
	blabla = (char*)malloc(sizeof(char) * (pwr + 1 + neg));
	if (nbr == -2147483648)
	{
		blabla = "-2147483648\0";
		return (blabla);
	}
	i = 0;
	nb = nbr;
	if (nb < 0)
		nb = -nb;
	while (nb > 0)
	{
		blabla[i++] = ((nb % 10) + '0');
		nb /= 10;
	}
	if (nbr == 0)
		blabla[i++] = '0';
	if (neg == 1)
		blabla[i++] = '-';
	blabla[i] = '\0';
	blabla = ft_rev(blabla);
	return (blabla);
}

#include <stdio.h>

int		main(void)
{
	printf("%s\n", ft_itoa(-54564));
	return (0);
}
