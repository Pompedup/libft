/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:15:38 by abezanni          #+#    #+#             */
/*   Updated: 2018/09/02 15:00:08 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	apply_signe(t_flags *dt_flags, t_bool neg)
{
	if (neg || dt_flags->flags & PLUS || dt_flags->flags & SPACE)
	{
		if (neg)
			dt_flags->c = '-';
		else
			dt_flags->c = dt_flags->flags & PLUS ? '+' : ' ';
		dt_flags->len++;
	}
}

static void	apply_hash(t_flags *dt_flags, uintmax_t nbr)
{
	if (dt_flags->flags & HASH)
	{
		if (dt_flags->type == 'o' || dt_flags->type == 'O')
		{
			if (!nbr && !(dt_flags->flags & DOT && !dt_flags->precision))
				dt_flags->flags -= HASH;
			else if (dt_flags->flags & DOT && dt_flags->precision)
				dt_flags->flags -= HASH;
		}
		else if (!nbr)
			dt_flags->flags -= HASH;
	}
	if ((dt_flags->flags & HASH && dt_flags->base != 10)
		|| dt_flags->type == 'p')
	{
		if (dt_flags->base == 16)
			dt_flags->hash = dt_flags->type == 'X' ? "0X" : "0x";
		else if (dt_flags->base == 2)
			dt_flags->hash = "0b";
		else if (!dt_flags->precision)
			dt_flags->hash = "0";
		dt_flags->len += ft_strlen(dt_flags->hash);
	}
}

void		apply_flags_numbers(t_flags *dt_flags, t_bool neg,
				t_bool signe, uintmax_t nbr)
{
	dt_flags->c = 0;
	dt_flags->hash = NULL;
	if (dt_flags->flags & DOT)
		dt_flags->precision = dt_flags->precision > dt_flags->len
			? dt_flags->precision - dt_flags->len : 0;
	if (signe)
		apply_signe(dt_flags, neg);
	else
		apply_hash(dt_flags, nbr);
	if (dt_flags->flags & ZERO)
	{
		dt_flags->precision = dt_flags->space > dt_flags->len
			? dt_flags->space - dt_flags->len : 0;
		dt_flags->space = 0;
	}
	dt_flags->space = dt_flags->space > dt_flags->len + dt_flags->precision
		? dt_flags->space - dt_flags->len - dt_flags->precision : 0;
}

void		apply_flags_strings(t_printf *dt, t_flags *dt_flags, int size)
{
	dt_flags->precision = 0;
	if (dt_flags->flags & ZERO)
	{
		dt_flags->precision = dt_flags->space > size
			? dt_flags->space - size : 0;
		dt_flags->space = 0;
	}
	dt_flags->space = dt_flags->space > size ? dt_flags->space - size : 0;
	if (!(dt_flags->flags & MINUS))
		padding(dt, dt_flags, FALSE);
	padding(dt, dt_flags, TRUE);
}
