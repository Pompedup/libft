/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:16:58 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 09:49:20 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	int		size;
	int		i;
	char	*tab;

	if (start < len)
	{
		size = len - start;
		if (!(tab = malloc(sizeof(char) * (size + 1))))
			return (NULL);
		tab[size + 1] = '\0';
		i = 0;
		while (tab[i])
		{
			tab[i] = s[start];
			i++;
			start++;
		}
		return (tab);
	}
	return (NULL);
}
