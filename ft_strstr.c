/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 13:27:56 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 09:46:46 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t i_str;
	size_t i_tf;
	size_t i;

	i_str = 0;
	i = 0;
	i_tf = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[i_str])
	{
		while (str[i_str + i_tf] == to_find[i_tf] && to_find[i_tf])
			i_tf++;
		if (to_find[i_tf] == '\0')
			return ((char*)&str[i_str]);
		i_str++;
	}
	return (NULL);
}
