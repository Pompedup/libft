/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:58:08 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:26:31 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

t_bool	ft_strisint(char *str, size_t len)
{
	if ((*str != '+' && *str != '-' && len > 10) || len > 11 || len == 0)
		return (FALSE);
	if (len > 9 && ft_strcmp(*str == '+' || *str == '-' ? str + 1 : str,
		*str == '-' ? "2147483648" : "2147483647") > 0)
		return (FALSE);
	if (((*str == '+' || *str == '-') && !*(str + 1)) ||
		!ft_strnis(*str == '+' || *str == '-' ? str + 1 : str, ft_isdigit,\
		*str == '+' || *str == '-' ? len - 1 : len))
		return (FALSE);
	return (TRUE);
}
