/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:19:32 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:07:13 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

/*
**	Cherche la derniere apparition du caractere c dans la chaine str
*/

char	*ft_strrchr(const char *str, int c)
{
	size_t i;

	i = ft_strlen(str) + 1;
	while (i-- > 0)
	{
		if (str[i] == c)
			return ((char*)(str + i));
	}
	return (NULL);
}
