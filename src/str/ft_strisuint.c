/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:58:08 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:13:53 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

t_bool	ft_strisuint(char *str, size_t len)
{
	if ((*str != '+' && len > 10) || len > 11 || len == 0)
		return (FALSE);
	if (len > 9 && ft_strcmp(*str == '+' ? str + 1 : str, "4294967295") > 0)
		return (FALSE);
	if ((*str == '+' && !*(str + 1)) || !ft_strnis(*str == '+' ? str + 1 : str,\
		ft_isdigit, *str == '+' ? len - 1 : len))
		return (FALSE);
	return (TRUE);
}
