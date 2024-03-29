/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:05:27 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:33:38 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

void	ft_listiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst)
	{
		(*f)(lst);
		if (lst->next)
			ft_listiter(lst->next, (f));
	}
}
