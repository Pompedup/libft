/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:58:08 by abezanni          #+#    #+#             */
/*   Updated: 2018/06/08 14:58:17 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isint(char *str)
{
	int		len;

	len = ft_strlen(str);
	if ((*str != '+' && *str != '-' && len > 10) || len > 11 || len == 0)
		return (0);
	if (len > 9 && ft_strcmp(*str == '+' || *str == '-' ? str + 1 : str,
		*str == '-' ? "2147483648" : "2147483647") > 0)
		return (0);
	if (((*str == '+' || *str == '-') && !*(str + 1)) ||
		!ft_strisall(*str == '+' || *str == '-' ? str + 1 : str, ISDIGIT))
		return (0);
	return (1);
}
