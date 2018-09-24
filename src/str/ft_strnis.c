/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 17:43:14 by abezanni          #+#    #+#             */
/*   Updated: 2018/09/24 17:44:22 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnis(char *str, int (*f)(int c), size_t len)
{
	size_t i;

	i = 0;
	if (!str && !*str)
		return (0);
	while (str[i] && i < len)
	{
		if (!f(str[i]))
			return (0);
		str++;
	}
	if (i < len)
		return (0);
	return (1);
}
