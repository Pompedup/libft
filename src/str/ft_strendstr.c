/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strendstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 15:58:38 by abezanni          #+#    #+#             */
/*   Updated: 2018/10/13 16:05:17 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Verifie si str finit par to_find
*/

char	*ft_strendstr(const char *str, const char *to_find)
{
	int i;
	int j;

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
