/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strposchrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pompedup <pompedup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 00:28:21 by pompedup          #+#    #+#             */
/*   Updated: 2018/08/19 00:30:15 by pompedup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strposchrs(char *str, char *charset)
{
	char *tmp;

	tmp = ft_strchrs(str, charset);
	return (tmp ? tmp - str : -1);
}
