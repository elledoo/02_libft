/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 15:08:27 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/14 13:24:13 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	len;

	len = ft_strlen(needle);
	if (!needle || !len)
		return ((char *)haystack);
	while (*haystack)
	{
		if (!ft_memcmp(haystack, needle, len))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
