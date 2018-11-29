/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:10:14 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:22:12 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct.h"
#include <stdlib.h>

t_lst	*ft_lstnew(void *first, void *second, void *third, int nb)
{
	t_lst *back;

	if (!(back = malloc(sizeof(t_lst))))
		return (NULL);
	back->first = first;
	back->second = second;
	back->third = third;
	back->nb = nb;
	back->next = NULL;
	return (back);
}
