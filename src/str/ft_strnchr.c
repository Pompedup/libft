/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 17:09:41 by abezanni          #+#    #+#             */
/*   Updated: 2018/09/03 22:43:59 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(const char *s, int c, int len)
{
	int i;

	i = 0;
	while (s && s[i] && s[i] != c && i < len)
		i++;
	return (s && s[i] == c && c ? (char *)s + i : NULL);
}
