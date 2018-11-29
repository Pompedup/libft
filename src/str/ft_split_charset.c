/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_charset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 15:15:24 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:14:32 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include <stdlib.h>

char	**ft_split_charset(char *str, char *charset)
{
	char	**back;
	size_t	size_words;
	size_t	i;

	if (!(str && charset) || !(back = malloc(sizeof(char*) *
		((ft_nbr_words_charset(str, charset) + 1)))))
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
