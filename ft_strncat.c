/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:45:49 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 09:49:00 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t i_dest;

	i = 0;
	i_dest = 0;
	while (dest[i_dest])
		i_dest++;
	while (i < n && src[i])
	{
		dest[i_dest] = src[i];
		i_dest++;
		i++;
	}
	dest[i_dest] = '\0';
	return (dest);
}
