/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:03:23 by adibou            #+#    #+#             */
/*   Updated: 2018/08/15 15:42:00 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnewset(char c, size_t size)
{
	char *back;

	if (!size || !(back = (char*)malloc(size + 1)))
		return (NULL);
	back[size] = 0;
	return (ft_memset(back, c, size));
}
