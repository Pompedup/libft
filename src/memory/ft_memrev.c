/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:52:25 by ccoupez           #+#    #+#             */
/*   Updated: 2018/11/29 19:25:08 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_memrev(void *src, size_t len)
{
	size_t	start;
	char	*str;
	char	tmp;

	start = 0;
	len -= 1;
	str = (char *)src;
	while (start < len)
	{
		tmp = str[start];
		str[start] = str[len];
		str[len] = tmp;
		start++;
		len--;
	}
}
