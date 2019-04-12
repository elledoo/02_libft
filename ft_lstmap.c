/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:31:10 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/12 16:20:01 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *new_head;
	t_list *previous;

	previous = NULL;
	new_head = NULL;
	while (lst)
	{
		new = ft_lstnew(lst->content, lst->content_size);
		if (!new_head)
			new_head = new;
		new = f(new);
		if (previous)
			previous->next = new;
		previous = new;
		lst = lst->next;
	}
	return (new_head);
}
