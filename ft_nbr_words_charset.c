/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_words_charset.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adibou <adibou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 14:52:08 by adibou            #+#    #+#             */
/*   Updated: 2018/04/29 14:58:30 by adibou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_nbr_words_charset(char *str, char *charset)
{
	int back;

	back = !ft_strchr(charset, *str) ? 1 : 0;
	while (*str)
	{
		if (ft_strchr(charset, *str) && !ft_strchr(charset, *(str + 1)) && *(str + 1))
			back++;
		str++;
	}
	return (back);
}