/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:36:31 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:34:21 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *back;

	if (!(back = (void *)malloc(size)))
		return (NULL);
	ft_bzero(back, size);
	return (back);
}
