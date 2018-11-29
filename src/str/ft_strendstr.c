/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 15:58:38 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:47:57 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
**	Verifie si str finit par to_find
*/

char	*ft_strendstr(const char *str, const char *to_find)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	if (to_find[j] == '\0')
		return ((char*)(str + i));
	while (to_find[j])
		j++;
	while (i && j && str[i] == to_find[j])
	{
		j--;
		i--;
	}
	if (j == 0 && str[i] == to_find[j])
		return ((char*)(str + i));
	return (NULL);
}
