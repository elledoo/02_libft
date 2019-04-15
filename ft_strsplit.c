/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 10:36:20 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/15 14:17:52 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_char(char const *s, int start, char c)
{
	int	n;

	n = 0;
	while (s[start++] != c)
		n++;
	return (n);
}

static void	ft_free(char **d, int i)
{
	while (i >= 0)
		free(d[i--]);
	free(d);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**d;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (!(d = (char **)(malloc(sizeof(char *) * (ft_get_words(s, c) + 1)))))
		return (NULL);
	while (i < ft_get_words(s, c))
	{
		while (s[j] == c)
			j++;
		if (!(d[i] = ft_strsub(&s[j], 0, ft_get_char(s, j, c))))
		{
			ft_free(d, i);
			return (NULL);
		}
		j += ft_get_char(s, j, c);
		i++;
	}
	d[i] = NULL;
	return (d);
}
