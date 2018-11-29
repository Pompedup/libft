/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 22:33:54 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 19:24:18 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "basics.h"

static void	init(size_t *i, size_t *j, char *str)
{
	*i = 0;
	*j = 40;
	ft_memset(str, ' ', 56);
}

void		ft_print_memory(const void *addr, size_t size)
{
	unsigned char	*str;
	char			tabmem[57];
	size_t			i;
	size_t			j;

	init(&i, &j, tabmem);
	str = (unsigned char *)addr;
	tabmem[56] = '\0';
	while (str < (unsigned char *)addr + size)
	{
		tabmem[i++] = HEXAMIN[*str / 16];
		tabmem[i++] = HEXAMIN[*str % 16];
		if (!((i + 1) % 5))
			i++;
		tabmem[j++] = ft_isprint((char)*str) ? *str : '.';
		str++;
		if (j == 56)
		{
			ft_putendl(tabmem);
			init(&i, &j, tabmem);
		}
	}
	tabmem[j] = '\0';
	if (j != 40)
		ft_putendl(tabmem);
}
