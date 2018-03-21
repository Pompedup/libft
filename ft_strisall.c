/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:24:23 by abezanni          #+#    #+#             */
/*   Updated: 2018/03/21 14:19:50 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisall(char *str, int	(*f)(int c))
{
	if (!*str)
		return (0);
	while(*str)
	{
		if (!f(*str))
			return (0);
		str++;
	}
	return (1);
}
