/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_push_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:37:29 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/09 17:47:34 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../listft.h"

static void	ilist_attach_back(t_ilist *self, t_ilist *new_node)
{
	if (!new_node)
		return ;
	new_node->next = self->next;
	new_node->prev = self;
	self->next = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;
}

static void	push_back_rec(t_ilist *self, t_ilist *new_node, t_ilist *first)
{
	if (self->next && self->next != first)
		push_back_rec(self->next, new_node, first);
	else
		ilist_attach_back(self, new_node);
}

void	ft_ilist_push_back_val(t_ilist *self, int val)
{
	t_ilist	*new_node;

	new_node = ft_ilist_val_new(val);
	ft_ilist_push_back(self, new_node);
}

void	ft_ilist_push_back(t_ilist *self, t_ilist *new_node)
{
	if (self)
		push_back_rec(self, new_node, self);
}
