/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:56:51 by abezanni          #+#    #+#             */
/*   Updated: 2018/06/08 15:08:05 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_listdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *next;

	if (!(*alst))
		return ;
	tmp = *alst;
	next = tmp->next;
	while (next)
	{
		tmp = next;
		next = tmp->next;
		ft_listdelone(&tmp, del);
	}
	ft_listdelone(alst, del);
}
