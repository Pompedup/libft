/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:26:14 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 09:42:56 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_c;

	i = 0;
	s_c = (char*)s;
	while (s_c[i] && i < n)
	{
		if (s_c[i] == c)
			return ((void*)&s[i]);
		i++;
	}
	return (NULL);
}
