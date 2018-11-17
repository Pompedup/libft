/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:41:03 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 09:32:03 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int i;

	i = n;
	if (src < dest)
	{
		while (i > 0)
		{
			((char*)dest)[i] = ((char*)src)[i];
			i++;
		}
	}
	if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}
