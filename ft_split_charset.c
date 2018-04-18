/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_charset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:15:24 by abezanni          #+#    #+#             */
/*   Updated: 2018/04/18 16:24:19 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int ft_nb_words(char *str, char *charset)
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

char	**ft_split_charset(char *str, char *charset)
{
	char	**back;
	int		nb_words;

	nb_words = ft_nb_words(str, charset);
	if (!(str && charset) || !(back = malloc(sizeof(char*) * ((nb_words + 1)))))
		return (NULL);
	return (back);
}
