/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:53:59 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/08 17:40:47 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../listft.h"
#include <stddef.h>
#include <stdlib.h>

static void	ilist_delete_rec(t_ilist **self, t_ilist *first)
{
	if ((*self)->next && (*self)->next != first)
	{
		ilist_delete_rec(&((*self)->next), first);
	}
	free (*self);
	*self = NULL;
}

void	ft_ilist_delete(t_ilist	**self)
{
	if (*self)
		ilist_delete_rec(self, *self);
}
