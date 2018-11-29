/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:16:28 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:22:30 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_lstpushback(t_lst **begin_list, t_lst *new)
{
	t_lst *tmp;

	if (*begin_list != NULL)
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	else
	{
		*begin_list = new;
		(*begin_list)->next = NULL;
	}
}
