/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strposchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:59:33 by abezanni          #+#    #+#             */
/*   Updated: 2018/08/18 17:02:31 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strposchr(char *str, char c)
{
	char *tmp;

	tmp = ft_strchr(str, c);
	return (tmp ? tmp - str : -1);
}
