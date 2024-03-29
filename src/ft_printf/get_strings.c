/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_strings.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:54:25 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:53:41 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	add_wchar(t_printf *dt, wchar_t c, int size)
{
	if (size == 1)
		dt->buf_move[0] = (char)c;
	else
	{
		if (size == 2)
			dt->buf_move[0] = ((c & (0x1f << 6)) >> 6) | 0xC0;
		else
		{
			if (size == 3)
				dt->buf_move[0] = ((c >> 12) & 0xf) | 0xE0;
			else
			{
				dt->buf_move[0] = ((c >> 18) & 7) | 0xF0;
				dt->buf_move[1] = ((c >> 12) & 0x3f) | 0x80;
			}
			dt->buf_move[size - 2] = ((c >> 6) & 0x3f) | 0x80;
		}
		dt->buf_move[size - 1] = (c & 0x3f) | 0x80;
	}
}

static int	wchar_t_len(wchar_t c)
{
	unsigned int	bin;
	int				i;

	bin = 2147483648;
	i = 32;
	while (!(bin & c) && bin)
	{
		bin /= 2;
		i--;
	}
	return (i < 8 || i > 25 ? 1 : (i - 2) / 5 + 1);
}

void		type_c(t_printf *dt, t_flags *dt_flags, char type)
{
	wchar_t	c;
	int		size;

	if (type == 'c' || type == 'C')
		c = va_arg(dt->ap, wchar_t);
	else
		c = type;
	if (type == 'c' && !(dt_flags->flags & L))
		c = (char)c;
	size = wchar_t_len(c);
	apply_flags_strings(dt, dt_flags, size);
	add_wchar(dt, c, size);
	dt->buf_move += size;
	dt->less -= size;
	if (dt_flags->flags & MINUS)
		padding(dt, dt_flags, FALSE);
}

static void	long_string(t_printf *dt, t_flags *dt_flags, wchar_t *str)
{
	int size;
	int i;
	int j;

	i = 0;
	size = 0;
	while (str[i] && (dt_flags->flags & DOT ? size < dt_flags->precision : 1))
		size += wchar_t_len(str[i++]);
	if (dt_flags->flags & DOT && size > dt_flags->precision)
		size -= wchar_t_len(str[--i]);
	apply_flags_strings(dt, dt_flags, size);
	j = 0;
	while (j < i)
	{
		add_wchar(dt, str[j], (size = wchar_t_len(str[j])));
		dt->buf_move += size;
		dt->less -= size;
		j++;
	}
	if (dt_flags->flags & MINUS)
		padding(dt, dt_flags, FALSE);
}

void		type_s(t_printf *dt, t_flags *dt_flags, char type)
{
	wchar_t	*str;
	int		size;

	str = va_arg(dt->ap, wchar_t*);
	if ((type == 'S' || dt_flags->flags & L) && str)
		long_string(dt, dt_flags, str);
	else
	{
		if (!str)
			size = 6;
		else
			size = (int)ft_strlen((char*)str);
		dt_flags->flags & DOT
			? size = ft_smallest(size, dt_flags->precision) : 0;
		apply_flags_strings(dt, dt_flags, size);
		rotative_buf(dt, str ? (char*)str : "(null)", size);
		if (dt_flags->flags & MINUS)
			padding(dt, dt_flags, FALSE);
	}
}
