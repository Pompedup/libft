/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 17:41:43 by abezanni          #+#    #+#             */
/*   Updated: 2018/08/18 15:31:05 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Insersion des données dans la variable de retour avec
** une variable de type long long
*/

static void	ft_lltoa_insert(char *back, int base,
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
** Gestion d'une variable de type long long a convertir en tableau de
** charactères avec une conversion possible selon la base et des majuscules
** (selon la base)
*/

int			ft_lltoa_base(char *str, long long value, int base, int maj)
{
	int					i;
	unsigned long long	save;

	if (base < 2 || base > 16)
		return (-1);
	if (value == 0)
		ft_strcpy(str, "0");
	else
	{
		save = value < 0 ? -((unsigned long long)value) : (unsigned long long)value;
		i = 0;
		while (save)
		{
			save /= base;
			i++;
		}
		save = value < 0 ? -((unsigned long long)value) : (unsigned long long)value;
		if (value < 0)
			i = base == 10 ? i + 1 : i;
		str[0] = '-';
		ft_lltoa_insert(str + i, base, save, maj);
	}
	return (ft_strlen(str));
}
