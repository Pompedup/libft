/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pompedup <pompedup@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 14:38:37 by abezanni          #+#    #+#             */
/*   Updated: 2018/08/31 14:32:48 by pompedup         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

# define CONV		"sSpbdDioOuUxXcC%"
# define FLAG		".+ -0#hhlljz"
# define DOT		(1 << 0)
# define PLUS		(1 << 1)
# define SPACE		(1 << 2)
# define MINUS		(1 << 3)
# define ZERO		(1 << 4)
# define HASH		(1 << 5)
# define H			(1 << 6)
# define HH			(1 << 7)
# define L			(1 << 8)
# define LL			(1 << 9)
# define J			(1 << 10)
# define Z			(1 << 11)
# define FT_PRINTF	0
# define FT_SPRINTF	1
# define FT_FPRINTF	2

# define BUFF_PRF	500

typedef struct	s_printf
{
	char		*format;
	int			fd;
	char		option;
	char		buf[BUFF_PRF];
	char		*buf_move;
	char		*str;
	int			less;
	int			tot;
	va_list		ap;
}				t_printf;

typedef struct	s_flags
{
	char			type;
	char			c;
	char			*hash;
	int				len;
	int				base;
	int				flags;
	int				space;
	int				precision;

}				t_flags;

/*
typedef struct	s_color
{
	char		*color;
	char		*color_code;
}				t_color;
*/
void	get_unsigned(t_printf *dt, t_flags *dt_flags, char type);
void	get_signed(t_printf *dt, t_flags *dt_flags, char type);
void	type_c(t_printf *dt, t_flags *dt_flags, char type);
void	type_s(t_printf *dt, t_flags *dt_flags, char type);

/*
********************************************************************************
**                                                                            **
**   process_format.c                                                         **
**                                                                            **
********************************************************************************
*/

void			process_format(t_printf *dt);
void			rotative_buf(t_printf *dt, char *src, int to_cpy);
void			padding(t_printf *dt, t_flags *dt_flags, t_bool precision);

/*
********************************************************************************
**                                                                            **
**   get_flags.c                                                              **
**                                                                            **
********************************************************************************
*/

char			*get_flags(char *format, t_flags *data);

/*
********************************************************************************
**                                                                            **
**   ft_printf.c                                                              **
**                                                                            **
********************************************************************************
*/

int				ft_printf(char *str, ...);
int				ft_fprintf(int fd, char *format, ...);
//int				ft_sprintf(char **str, char *format, ...);


void	apply_flags(t_flags *dt_flags, t_bool neg, t_bool signe, uintmax_t nbr);

#endif