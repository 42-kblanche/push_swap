/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:56:16 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/08 19:19:30 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../listft.h"
#include <stddef.h>
#include <stdlib.h>

t_ilist	*ft_ilist_pop(t_ilist **self)
{
	t_ilist	*ret;

	if (!*self)
		return (NULL);
	if ((*self)->next == *self)
	{
		ret = ft_ilist_val_new((*self)->val);
		ft_ilist_delete(self);
		return (ret);
	}
	if ((*self)->next)
		(*self)->next->prev = (*self)->prev;
	if ((*self)->prev)
		(*self)->prev->next = (*self)->next;
	ret = (*self);
	if ((*self)->next != *self)
		*self = (*self)->next;
	else
		ft_ilist_delete(self);
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}

void	ft_ilist_pop_push(t_ilist **self, t_ilist **other)
{
	t_ilist	*tmp;

	tmp = ft_ilist_pop(self);
	ft_ilist_push_front(other, tmp);
}
