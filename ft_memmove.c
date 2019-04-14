/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:51:12 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/14 15:59:32 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = (unsigned char *)dst;
	ps = (const unsigned char *)src;
	if (src < dst)
	{
		pd = pd + len - 1;
		ps = ps + len - 1;
		while (len--)
			(*pd-- = *ps--);
	}
	else
	{
		while (len--)
			*pd++ = *ps++;
	}
	return (dst);
}
