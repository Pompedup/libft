/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 12:47:14 by abezanni          #+#    #+#             */
/*   Updated: 2018/12/04 10:03:24 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

static int		ft_full_line(char *buff, char **line, int ret, char *ret_line)
{
	char *tmp;
	char *to_free;

	if (ret == 0 && !*buff && !*line)
		return (0);
	if (ret_line)
		*ret_line = '\0';
	if (!*line)
		*line = ft_strdup(buff);
	else
		*line = ft_strmjoin(*line, buff, 1);
	if (!*line)
		return (-1);
	if (ret_line)
		ft_strcpy(buff, ret_line + 1);
	else if (ret == 0 && !**line)
		return (0);
	return (1);
}

static int		ft_read(int fd, char *buff, char **line)
{
	int		ret;
	char	*ret_line;

	while (1)
	{
		if ((ret = read(fd, buff, BUFF_SIZE)) == -1)
			return (-1);
		else if (ret == 0)
			return (ft_full_line(buff, line, ret, NULL));
		buff[ret] = 0;
		if ((ret_line = ft_strchr(buff, '\n')))
			return (ft_full_line(buff, line, ret, ret_line));
		else
		{
			if (!*line)
				*line = ft_strdup(buff);
			else
				*line = ft_strmjoin(*line, buff, 1);
			if (!*line)
				return (-1);
		}
	}
}

static t_list	*ft_find_fd(t_list **lst, size_t fd)
{
	t_list	*tmp;
	char	*content;

	while (*lst)
	{
		if ((*lst)->content_size == fd)
			return (*lst);
		lst = &((*lst)->next);
	}
	if (!(content = ft_memalloc(sizeof(*content) * (BUFF_SIZE + 1))))
		return (NULL);
	if (!(tmp = ft_listnew(NULL, 0)))
	{
		free(content);
		return (NULL);
	}
	tmp->content = content;
	tmp->content_size = fd;
	*lst = tmp;
	return (tmp);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*lst;
	t_list			*tmp;
	int				ret;
	char			*ret_line;

	if (!line)
	{
		ft_listremoveone(&lst, fd);
		return (-1);
	}
	if (!(tmp = ft_find_fd(&lst, (size_t)fd)))
		return (-1);
	*line = NULL;
	if ((ret_line = ft_strchr((char*)(tmp->content), '\n')) != NULL)
		return (ft_full_line((char*)(tmp->content), line, 1, ret_line));
	ret = ft_read(fd, (char*)tmp->content, line);
	if (ret == 0 || ret == -1)
	{
		ft_strdel(line);
		ft_listremoveone(&lst, fd);
		return (ret);
	}
	return (ret);
}
