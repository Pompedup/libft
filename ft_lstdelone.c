/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:13:43 by abezanni          #+#    #+#             */
/*   Updated: 2018/06/08 16:09:03 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_lst *lst, int to_free)
{
	if (!lst)
		return ;
	if (lst->first && to_free & 1)
		free(lst->first);
	if (lst->second && to_free & 2)
		free(lst->second);
	if (lst->third && to_free & 4)
		free(lst->third);
	free(lst);
}
