/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 16:55:07 by abezanni          #+#    #+#             */
/*   Updated: 2018/10/05 18:10:53 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			get_star(t_printf *dt)
{
	if (!dt->present_star)
	{
		dt->star = va_arg(dt->ap, int);
		dt->present_star = TRUE;
	}
	return (dt->star);
}

static char	*get_convert(char *format, t_flags *dt_flags, int conv)
{
	if ((conv == 6 && *format == 'h') || (conv == 8 && *format == 'l'))
	{
		conv++;
		format++;
	}
	if (dt_flags->flags < (1 << conv))
		dt_flags->flags = (dt_flags->flags & 63) + (1 << conv);
	return (format);
}

char		*get_flags(t_printf *dt, char *format, t_flags *dt_flags)
{
	int		tmp;

	while ((*format && (tmp = ft_strposchr(FLAG, *format)) > -1)
		|| ft_isdigit(*format))
	{
		if (tmp == -1 || tmp == 12)
		{
			dt_flags->space = tmp == 6 ? get_star(dt) : ft_atoi(format);
			format += tmp == 6 ? 0 : ft_nbr_len(dt_flags->space) - 1;
			tmp = -1;
		}
		format++;
		if (1 << tmp == DOT)
		{
			dt_flags->precision = *format == '*' ? get_star(dt) : ft_atoi(format);
			if (*format == '*')
				format++;
			else
				while (ft_isdigit(*format))
					format++;

		}
		if (tmp > 6)
			format = get_convert(format, dt_flags, tmp);
		else if (tmp > -1)
			dt_flags->flags |= 1 << tmp;
	}
	return (format);
}
