/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:30:21 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 09:44:36 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*s1_c;
	char	*s2_c;

	i = 0;
	s1_c = (char*)s1;
	s2_c = (char*)s2;
	if (n == 0)
		return (0);
	while (s1_c[i] && s2_c[i] && s1_c[i] == s2_c[i] && i < n)
		i++;
	return (s1_c[i] - s2_c[i]);
}
