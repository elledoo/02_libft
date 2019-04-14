/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:48:33 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/14 17:27:06 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	char	*r;

	if (!s1 || !s2)
		return (NULL);
	if (!(d = (char *)(malloc(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	r = d;
	while (*s1)
	{
		*d = *s1;
		d++;
		s1++;
	}
	while (*s2)
	{
		*d = *s2;
		d++;
		s2++;
	}
	*d = '\0';
	return (r);
}
