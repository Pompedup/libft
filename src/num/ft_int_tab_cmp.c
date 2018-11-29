/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_tab_cmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 17:14:33 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:55:02 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_int_tab_cmp(int *tab1, int *tab2, size_t size1, size_t size2)
{
	size_t i;
	size_t j;

	i = 0;
	while (i < size1)
	{
		j = 0;
		while (j < size2)
		{
			if (tab1[i] == tab2[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
