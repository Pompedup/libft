/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:47:36 by abezanni          #+#    #+#             */
/*   Updated: 2018/08/17 16:35:08 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Insersion des données dans la variable de retour avec
** une variable de type unsigned long long
*/

static void	ft_ulltoa_insert(char *back, int base,
	unsigned long long val, int maj)
{
	*(back--) = 0;
	while (val)
	{
		if (maj)
			*(back--) = HEXAMAX[val % base];
		else
			*(back--) = HEXAMIN[val % base];
		val /= base;
	}
}

/*
** Gestion d'une variable de type unsigned long long a convertir en tableau de
** charactères avec une conversion possible selon la base et des majuscules
** si hexadecimal majuscule
*/

int			ft_ulltoa_base(char *str, unsigned long long value,
				int base, int maj)
{
	int					i;
	unsigned long long	save;

	if (base < 2 || base > 16)
		return (-1);
	if (value == 0)
		ft_strcpy(str, "0");
	else
	{
		i = 0;
		save = value;
		while (save)
		{
			save /= base;
			i++;
		}
		str[0] = '-';
		ft_ulltoa_insert(str + i, base, value, maj);
	}
	return (ft_strlen(str));
}
