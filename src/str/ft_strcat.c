/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:36:49 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:03:36 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while (dst[i])
		i++;
	while (*src)
		dst[i++] = *(src++);
	dst[i] = '\0';
	return (dst);
}
