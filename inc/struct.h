/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:18:30 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:35:41 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <string.h>

# define TRUE 1
# define FALSE 0
# define HEXAMIN	"0123456789abcdef"
# define HEXAMAX	"0123456789ABCDEF"
# define LOMAG 0x0101010101010101L
# define HIMAG 0x8080808080808080L

typedef char	t_bool;

typedef struct		s_list{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_lst{
	void			*first;
	void			*second;
	void			*third;
	int				nb;
	struct s_lst	*next;
}					t_lst;

#endif
