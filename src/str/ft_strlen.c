/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:16:27 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:37:27 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

size_t	ft_strlen(const char *str)
{
	unsigned long	*ptr_long;
	char			*end;
	unsigned long	long_word;

	ptr_long = (unsigned long*)str;
	while (1)
	{
		long_word = *(ptr_long++);
		if (((long_word - LOMAG) & ~long_word & HIMAG) != 0)
		{
			end = (char*)(ptr_long - 1);
			if (!end[0])
				return (end - str);
			if (!end[1])
				return (end - str + 1);
			if (!end[2])
				return (end - str + 2);
			if (!end[3])
				return (end - str + 3);
			if (!end[4] || !end[5])
				return (end - str + (!end[4] ? 4 : 5));
			return (end - str + (!end[6] ? 6 : 7));
		}
	}
}
