/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 19:09:04 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 09:40:15 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*src_c;
	char	*dest_c;

	i = 0;
	src_c = (char*)src;
	dest_c = (char*)dest;
	while (i < n && src_c[i] != c)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	dest_c[i] = src_c[i];
	if (i == n)
		return (NULL);
	else
		return (&dest[i + 1]);
}
