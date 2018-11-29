/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:09:41 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:02:53 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnchr(const char *s, int c, size_t len)
{
	size_t i;

	i = 0;
	while (s && s[i] && s[i] != c && i < len)
		i++;
	return (s && s[i] == c && c ? (char *)s + i : NULL);
}
