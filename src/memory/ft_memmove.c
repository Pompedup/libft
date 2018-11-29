/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 22:16:58 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:25:57 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *uc_dest;

	uc_dest = (unsigned char*)(dest);
	if (src > dest)
		while (n--)
			*((unsigned char *)dest++) = *((unsigned char *)src++);
	else
		while (n--)
			*((unsigned char *)(dest + n)) = *((unsigned char *)(src + n));
	return ((void*)uc_dest);
}
