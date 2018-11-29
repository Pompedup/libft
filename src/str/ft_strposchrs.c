/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strposchrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 00:28:21 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:39:24 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

int	ft_strposchrs(char *str, char *charset)
{
	char *tmp;

	tmp = ft_strchrs(str, charset);
	return (tmp ? tmp - str : -1);
}
