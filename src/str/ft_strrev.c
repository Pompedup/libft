/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:52:25 by ccoupez           #+#    #+#             */
/*   Updated: 2018/11/29 19:12:02 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

void	ft_strrev(char *str)
{
	size_t	start;
	size_t	len;
	char	tmp;

	start = 0;
	len = ft_strlen(str) - 1;
	while (start < len)
	{
		tmp = str[start];
		str[start] = str[len];
		str[len] = tmp;
		start++;
		len--;
	}
}
