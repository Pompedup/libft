/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:25:19 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:42:29 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"
#include <stdlib.h>

/*
**	Cree une chaine de size + 1 characteres initialises a 0
*/

char	*ft_strnew(size_t size)
{
	char *back;

	if (!(back = (char*)malloc(size + 1)))
		return (NULL);
	ft_bzero(back, size + 1);
	return (back);
}
