/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:07:30 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:46:10 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	full;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	if (i > size)
		i = size;
	full = i + j;
	j = -1;
	while (src[++j] && i + j < size - 1)
		dest[i + j] = src[j];
	if (i + j < size)
		dest[i + j] = '\0';
	return (full);
}
