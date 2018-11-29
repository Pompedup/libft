/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrtochar.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/06 19:08:44 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:00:40 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strstrtochar(char *str, char *to_find, char c)
{
	size_t i;

	i = 0;
	while (to_find[i] == str[i] && to_find[i])
		i++;
	return (!to_find[i] && str[i] == c ? i : 0);
}
