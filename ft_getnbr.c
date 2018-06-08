/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:46:07 by abezanni          #+#    #+#             */
/*   Updated: 2018/06/08 15:30:13 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_getnbr(char *str, int *value)
{
	if (!ft_isint(str))
		return (FALSE);
	*value = ft_atoi(str);
	return (TRUE);
}
