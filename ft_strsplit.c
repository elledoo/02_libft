/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 10:36:20 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/10 14:50:14 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int in;
	int	w;

	w = 0;
	in = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (in == 0)
			{
				in = 1;
				w++;
			}
		}
		if (*s == c)
		{
			if (in == 1)
				in = 0;
		}
		s++;
	}
	return (w);
}

static int	ft_get_char(char const *s, int start, char c)
{
	int	n;

	n = 0;
	while (s[start++] != c)
		n++;
	return (n);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**d;
	int		w;
	int		i;
	int		j;

	i = 0;
	j = 0;
	w = ft_words(s, c);
	if (!(d = (char **)(malloc(sizeof(char *) * (w + 1)))))
		return (NULL);
	while (i < w)
	{
		while (s[j] == c)
			j++;
		d[i] = ft_strsub(&s[j], 0, ft_get_char(s, j, c));
		j += ft_get_char(s, j, c);
		i++;
	}
	d[i] = NULL;
	return (d);
}
