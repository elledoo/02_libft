/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 13:31:10 by esuslova          #+#    #+#             */
/*   Updated: 2019/04/13 13:39:03 by esuslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *head;
	t_list *previous;

	previous = NULL;
	head = NULL;
	while (lst)
	{
		new = f(lst);
		if (!head)
			head = new;
		if (previous)
			previous->next = new;
		previous = new;
		lst = lst->next;
	}
	return (head);
}
