/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 16:18:30 by abezanni          #+#    #+#             */
/*   Updated: 2018/10/21 17:37:02 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# define TRUE 1
# define FALSE 0

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
