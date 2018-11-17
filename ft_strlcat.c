/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 14:54:12 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/12 16:53:31 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t y;
	size_t size;

	i = ft_strlen(dest);
	y = 0;
	while (src[y] && y < n)
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[i + y] = '\0';
	size = ft_strlen(src);
	return (size + n);
}
