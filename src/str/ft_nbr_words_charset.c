/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_words_charset.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 11:59:08 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:14:51 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

size_t	ft_nbr_words_charset(char *str, char *charset)
{
	size_t back;

	back = !ft_strchr(charset, *str) ? 1 : 0;
	while (*str)
	{
		if (ft_strchr(charset, *str) &&
		!ft_strchr(charset, *(str + 1)) && *(str + 1))
			back++;
		str++;
	}
	return (back);
}
