/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:28:21 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:23:49 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_sqrt(int nb)
{
	size_t back;

	back = 1;
	if (nb <= 0)
		return (0);
	while (((int)(back * back) < nb) && nb != 0)
		back++;
	return (nb % back == 0) ? back : 0;
}
