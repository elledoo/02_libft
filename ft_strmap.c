/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:49:34 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/14 17:10:43 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *dest;
	char *start;

	if (!s && !f)
		return (NULL);
	if (!(dest = (ft_memalloc(ft_strlen(s) + 1))))
		return (NULL);
	start = dest;
	while (*s)
	{
		*dest = f(*s);
		dest++;
		s++;
	}
	*dest = '\0';
	return (start);
}
