/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listpushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:11:29 by glebouch          #+#    #+#             */
/*   Updated: 2018/11/29 18:18:43 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"

void	ft_listpushback(t_list **begin_list, t_list *new)
{
	t_list *tmp;

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
