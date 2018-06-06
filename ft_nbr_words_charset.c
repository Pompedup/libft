/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_words_charset.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 11:59:08 by abezanni          #+#    #+#             */
/*   Updated: 2018/06/06 14:11:03 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbr_words_charset(char *str, char *charset)
{
	int back;

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
