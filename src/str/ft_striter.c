/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abezanni <abezanni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:33:21 by abezanni          #+#    #+#             */
/*   Updated: 2018/11/29 18:46:43 by abezanni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applique la fonction f a tous les caracteres de la chaine s
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
		while (*s)
			f(s++);
}
