/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:37:29 by kblanche          #+#    #+#             */
/*   Updated: 2026/02/04 11:38:11 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ilist.h"

void	ft_ilist_push_val(t_ilist *self, int val)
{
	t_ilist	*new_node;

    new_node = ft_ilist_val_new(val);
	ft_ilist_push(self, new_node);
}

void	ft_ilist_push(t_ilist *self, t_ilist *new_node)
{
	if (self->prev)
	{
		new_node->prev = self->prev->next;
		new_node->next = self;
		self->prev->next = new_node;
		self->next = new_node;
	}
	else
	{
		new_node->prev = self;
		new_node->next = self;
		self->prev = new_node;
		self->next = new_node;
	}
}
