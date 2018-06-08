/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:25:51 by abezanni          #+#    #+#             */
/*   Updated: 2018/06/08 15:06:43 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_listnew(const void *content, size_t content_size)
{
	t_list *back;

	if (!(back = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		back->content = (void*)content;
		back->content_size = content_size;
	}
	else
	{
		back->content = NULL;
		back->content_size = 0;
	}
	back->next = NULL;
	return (back);
}
