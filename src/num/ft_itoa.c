/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:08:48 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:23:00 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include <stdlib.h>

static void	ft_rec_itoa(char *back, int n, size_t i)
{
	if (n < 0)
	{
		back[0] = '-';
		if (n == -2147483648)
		{
			back[i] = 56;
			ft_rec_itoa(back, -(n / 10), --i);
		}
		else
			ft_rec_itoa(back, -n, i);
	}
	else if (n)
	{
		back[i] = n % 10 + 48;
		ft_rec_itoa(back, n / 10, --i);
	}
}

char		*ft_itoa(int n)
{
	char	*back;
	size_t	len;

	if (n == 0)
		return (ft_strdup("0"));
	len = ft_nbrlen(n);
	if (!(back = (char*)malloc(len + 1)))
		return (NULL);
	back[len] = 0;
	ft_rec_itoa(back, n, --len);
	return (back);
}
