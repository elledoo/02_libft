/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 09:35:16 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/12 16:08:55 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	a;
	char			*d;
	const char		*s;

	d = dst;
	s = src;
	a = (unsigned char)c;
	while (n-- && (*s != a))
	{
		*d = *s;
		d++;
		s++;
	}
	if (*s == a)
	{
		*d = a;
		d++;
		return ((void *)d);
	}
	else
		return (NULL);
}
