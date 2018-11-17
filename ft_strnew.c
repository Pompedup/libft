/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonati <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 14:28:09 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/16 20:56:16 by mbonati          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tab;
	size_t	i;

	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (tab[i])
	{
		tab[size] = '\0';
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
