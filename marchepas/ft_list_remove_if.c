/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpascaud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:06:35 by mpascaud          #+#    #+#             */
/*   Updated: 2018/01/15 15:29:39 by mpascaud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	tmp = *begin_list;
	while (*begin_list && (*begin_list)->next)
	{
		if (cmp((*begin_list)->next->data, data_ref) == 0)
		{
			tmp = (*begin_list)->next;
			(*begin_list)->next = (*begin_list)->next->next;
			free(tmp);
		}
		if ((*begin_list)->next)
			*begin_list = (*begin_list)->next;
	}
}
