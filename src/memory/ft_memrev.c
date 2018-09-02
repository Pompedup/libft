/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:52:25 by ccoupez           #+#    #+#             */
/*   Updated: 2018/09/02 14:34:05 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memrev(void *src, int len)
{
	int		start;
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
