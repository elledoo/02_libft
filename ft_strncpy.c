/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:54:12 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/12 17:57:36 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*res;

	res = dst;
	while (*src && len--)
		*dst++ = *src++;
	if (!*src)
	{
		while (len--)
			*dst++ = '\0';
	}
	return (res);
}
