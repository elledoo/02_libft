/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:11:02 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/14 17:54:27 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_len(int n)
{
	int		i;

	if (!n)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		len;
	char	*d;

	len = ft_nb_len(n);
	if (!(d = (char *)(malloc(sizeof(char) * (len + 1)))))
		return (NULL);
	d[len--] = '\0';
	if (n < 0)
		d[0] = '-';
	if (n == 0)
		d[0] = '0';
	while (n)
	{
		if (n >= 0)
			d[len] = '0' + (n % 10);
		else
			d[len] = '0' - (n % 10);
		len--;
		n = n / 10;
	}
	return (d);
}
