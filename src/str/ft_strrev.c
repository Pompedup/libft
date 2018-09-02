/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 17:52:25 by ccoupez           #+#    #+#             */
/*   Updated: 2018/09/02 14:33:02 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strrev(char *str)
{
	int		start;
	int		len;
	char	tmp;

	start = 0;
	len = (int)ft_strlen(str) - 1;
	while (start < len)
	{
		tmp = str[start];
		str[start] = str[len];
		str[len] = tmp;
		start++;
		len--;
	}
}
