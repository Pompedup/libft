/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnbrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 15:34:16 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:44:48 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

t_bool	ft_strnbrlen(char *str, size_t *len)
{
	*len = 0;
	if (*str == '-')
		*len = 1;
	while (ft_isdigit(str[*len]))
		(*len)++;
	return (*len ? TRUE : FALSE);
}
