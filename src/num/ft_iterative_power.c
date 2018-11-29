/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 14:22:13 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:20:36 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_iterative_power(int nb, int power)
{
	size_t back;

	if (power < 0)
		back = 0;
	else if (power == 0)
		back = 1;
	else
		back = nb;
	while (--power > 0)
	{
		back = back * nb;
	}
	return (back);
}
