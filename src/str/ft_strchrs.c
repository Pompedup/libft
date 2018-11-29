/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 15:28:11 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:49:03 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

char	*ft_strchrs(const char *s, const char *cs)
{
	while (s && cs && *s && !ft_strchr(cs, *s))
		s++;
	return (s && cs && *s && ft_strchr(cs, *s) ? (char *)s : NULL);
}
