/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:46:07 by abezanni          #+#    #+#             */
/*   Updated: 2018/10/13 17:41:59 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_getnbr(char *str, int *value)
{
	size_t len;

	len = 0;
	if (!(ft_strnbrlen(str, &len)))
		return (FALSE);
	if (!ft_strisint(str, len))
		return (FALSE);
	*value = ft_atoi(str);
	return (TRUE);
}
