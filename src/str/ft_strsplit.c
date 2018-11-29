/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 01:04:26 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:38:55 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

/*
**	Decoupe la chaine str en fonction du caractere c
*/

char			**ft_strsplit(const char *s, char c)
{
	char	**back;
	char	charset[2];

	charset[0] = c;
	charset[1] = 0;
	return (back = ft_split_charset((char *)s, charset));
}
