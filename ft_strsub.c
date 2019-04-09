/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 13:48:10 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/09 14:34:04 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*d;
	char		*res;

	if (start > ft_strlen(s))
		return (NULL);
	if (!(d = ft_memalloc(len + 1)))
			return (NULL);
	res = d;
	while (s[start] && len--)
	{
		*d++ = s[start];
		start++;
	}
	*d = '\0';
	return (res);
}
