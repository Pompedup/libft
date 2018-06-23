/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:10:58 by abezanni          #+#    #+#             */
/*   Updated: 2018/06/08 15:06:38 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_listmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *back;
	t_list *tmp;
	t_list *elem;

	if (!lst)
		return (NULL);
	elem = f(lst);
	if (!(back = ft_listnew(elem->content, elem->content_size)))
		return (NULL);
	tmp = back;
	lst = lst->next;
	while (lst)
	{
		elem = f(lst);
		if (!(tmp->next = ft_listnew(elem->content, elem->content_size)))
			return (NULL);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (back);
}
