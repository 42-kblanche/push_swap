/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_push_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:37:29 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/09 17:46:58 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../listft.h"

static void	ilist_attach_front(t_ilist *self, t_ilist *new_node)
{
	new_node->next = self;
	new_node->prev = self->prev;
	self->prev = new_node;
	if (new_node->prev)
		new_node->prev->next = new_node;
}

void	ft_ilist_push_front_val(t_ilist **self, int val)
{
	t_ilist	*new_node;

	new_node = ft_ilist_val_new(val);
	ft_ilist_push_front(self, new_node);
}

void	ft_ilist_push_front(t_ilist **self, t_ilist *new_node)
{
	if (new_node)
	{
		if (*self)
			ilist_attach_front(*self, new_node);
		*self = new_node;
	}
}
