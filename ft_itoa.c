/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 22:44:00 by mbonati           #+#    #+#             */
/*   Updated: 2018/11/17 10:09:59 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_filling(int i, int puissance, int n, char *result)
{
	while (puissance > 1)
	{
		result[i] = n / puissance + '0';
		n -= (n / puissance) * puissance;
		puissance /= 10;
		i++;
	}
	result[i] = n + '0';
	result[i + 1] = '\0';
	return (result);
}

char	*ft_itoa(int n)
{
	(void)n;
	return (ft_strdup("cc"));
}
