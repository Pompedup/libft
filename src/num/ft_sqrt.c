/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:28:21 by abezanni          #+#    #+#             */
/*   Updated: 2018/10/11 15:30:10 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sqrt(int nb)
{
	int back;

	back = 1;
	if (nb <= 0)
		return (0);
	while ((back * back < nb) && nb != 0)
		back++;
	return (nb % back == 0) ? back : 0;
}
