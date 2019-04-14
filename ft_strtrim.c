/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 20:35:58 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/14 17:29:19 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Trimming the beginning and updating the address  of the first symbol (b)
** and the subscript for the position (beg_p)
*/

static void	ft_beg(const char *s, char **b, int *beg_p)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	*beg_p = i;
	*b = (char *)&s[*beg_p];
}

/*
**Trimming the end and returning the total number of characters
*/

static int	ft_trim(const char *s, int beg_p)
{
	int	i;
	int w;
	int sp;

	i = beg_p;
	sp = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		{
			if (w == 1)
			{
				w = 0;
				sp = 0;
			}
			sp++;
		}
		else
			w = 1;
		i++;
	}
	if (!s[i] && w == 1)
		sp = 0;
	return (i - sp - beg_p);
}

char		*ft_strtrim(char const *s)
{
	int		n;
	char	*beg;
	char	*res;
	int		beg_p;

	if (!s)
		return (NULL);
	beg_p = 0;
	ft_beg(s, &beg, &beg_p);
	n = ft_trim(s, beg_p);
	if (!(res = (char *)(malloc(n + 1))))
		return (NULL);
	else
	{
		ft_strncpy(res, beg, n);
	}
	res[n] = '\0';
	return (res);
}
