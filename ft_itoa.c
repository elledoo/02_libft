/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 16:11:02 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/10 17:57:22 by esuslova         ###   ########.fr       */
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
	int	len;

	len = ft_nb_len(n);
	char	*d;
	if (!(d = (char *)(malloc(sizeof(int) * (len + 1)))))
		return (NULL);
	d[len--] = '\0';
	if (n < 0)
		d[0] = '-';
	if (n == 0)
		d[0] = '0';

	while (n)
	{
		n >= 0 ? (d[len] = '0' + (n % 10)) : (d[len] = '0' + ((n * -1) % 10));
		len--;
		n = n / 10;
	}
	return (d);
}
