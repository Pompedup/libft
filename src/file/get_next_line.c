/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:47:14 by abezanni          #+#    #+#             */
/*   Updated: 2018/12/04 11:29:02 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

static t_list	*ft_find_fd(t_list **lst, size_t fd)
{
	t_list *tmp;

	if (*lst == NULL)
	{
		*lst = ft_listnew(NULL, 0);
		(*lst)->content_size = fd;
		return (*lst);
	}
	else
	{
		tmp = *lst;
		while ((tmp->content_size != fd) && tmp->next)
			tmp = tmp->next;
		if (tmp->content_size != fd)
		{
			tmp->next = ft_listnew(NULL, 0);
			tmp = tmp->next;
			tmp->content_size = fd;
		}
	}
	return (tmp);
}

static int		ft_line_to_null(char **line)
{
	*line = NULL;
	return (0);
}

static int		ft_full_line(t_list *lst, char **line, int ret)
{
	char *tmp;
	char *to_free;

	if (ret == 0 && lst->content == NULL)
		return (ft_line_to_null(line));
	if ((tmp = ft_strchr((char*)(lst->content), '\n')) != NULL)
	{
		*line = ft_strndup((char*)(lst->content), tmp - (char*)(lst->content));
		to_free = lst->content;
		lst->content = ft_strdup(tmp + 1);
		ft_strdel(&to_free);
	}
	else
	{
		*line = ft_strdup((char*)(lst->content));
		free(lst->content);
		lst->content = NULL;
		if (ret == 0 && **line == 0)
		{
			ft_strdel(line);
			return (0);
		}
	}
	return (1);
}

static int		ft_read(t_list *tmp, char **line)
{
	int		ret;
	char	buffer[BUFF_SIZE + 1];

	buffer[0] = 0;
	while (ft_strchr(buffer, '\n') == NULL)
	{
		if ((ret = read(tmp->content_size, buffer, BUFF_SIZE)) == -1)
			return (-1);
		else if (ret == 0)
			return (ft_full_line(tmp, line, ret));
		else
		{
			buffer[ret] = 0;
			if (tmp->content == NULL)
				tmp->content = ft_strdup(buffer);
			else
				tmp->content = ft_strmjoin((char*)(tmp->content), buffer, 1);
		}
	}
	return (ft_full_line(tmp, line, ret));
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*lst;
	t_list			*tmp;
	int				ret;

	if (!line)
	{
		ft_listremoveone(&lst, fd);
		return (-1);
	}
	tmp = ft_find_fd(&lst, (size_t)fd);
	if (tmp->content && (ft_strchr((char*)(tmp->content), '\n')) != NULL)
		return (ft_full_line(tmp, line, 1));
	if ((ret = ft_read(tmp, line)) == 0)
	{
		ft_listremoveone(&lst, fd);
		return (0);
	}
	return (ret);
}
