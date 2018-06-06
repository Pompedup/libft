/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisall.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoupez <ccoupez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/20 17:24:23 by abezanni          #+#    #+#             */
/*   Updated: 2018/06/06 14:14:16 by ccoupez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisall(char *str, int (*f)(int c))
{
	if (!str && !*str)
		return (0);
	while (*str)
	{
		if (!f(*str))
			return (0);
		str++;
	}
	return (1);
}
