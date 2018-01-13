/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 18:28:06 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/13 19:14:34 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		result;
	int		neg;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] <= 32 && str[i])
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] && str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 65 && str[i] <= 70)
			|| (str[i] >= 97 && str[i] <= 102))
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * str_base) + (int)(str[i] - '0');
		if (str[i] >= 65 && str[i] <= 70)
			result = (result * str_base) + (int)(str[i] - 55);
		if (str[i] >= 97 && str[i] <= 102)
			result = (result * str_base) + (int)(str[i] - 87);
		i++;
	}
	return (result * neg);
}
