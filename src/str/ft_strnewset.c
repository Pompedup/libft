/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 15:03:23 by adibou            #+#    #+#             */
/*   Updated: 2018/11/29 18:42:18 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include <stdlib.h>

char	*ft_strnewset(char c, size_t size)
{
	char *back;

	if (!size || !(back = (char*)malloc(size + 1)))
		return (NULL);
	back[size] = 0;
	return (ft_memset(back, c, size));
}
