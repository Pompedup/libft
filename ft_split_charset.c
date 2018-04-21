/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_charset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:15:24 by abezanni          #+#    #+#             */
/*   Updated: 2018/04/21 15:18:35 by abezanni         ###   ########.fr       */
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
	int		size_words;
	int		i;

	if (!(str && charset) || !(back = malloc(sizeof(char*) * ((ft_nb_words(str, charset) + 1)))))
		return (NULL);
	i = 0;
	while (*str)
	{
		size_words = 0;
		while (ft_strchr(charset, *str))
			str++;
		while (*str && !ft_strchr(charset, *str))
		{
			str++;
			size_words++;
		}
		if (size_words)
			back[i++] = ft_strndup(str - size_words, size_words);
	}
	back[i] = NULL;
	return (back);
}
