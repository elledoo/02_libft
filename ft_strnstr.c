/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 17:54:20 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/12 19:14:10 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;

	size = ft_strlen(needle);
	while (*haystack && ((int)len - (int)size > 0))
	{
		if (!ft_memcmp(haystack, needle, size))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
