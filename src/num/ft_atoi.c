/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:44:36 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:52:29 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	deb;
	int		signe;
	int		back;

	i = 0;
	signe = 1;
	back = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	deb = i;
	while (48 <= str[i] && str[i] <= 57)
		back = back * 10 + str[i++] - 48;
	if (i - deb > 18)
		return (signe == 1 ? -1 : 0);
	return (back * signe);
}
