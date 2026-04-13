/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:58:40 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/11 20:36:36 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../listft.h"
#include "../printfft.h"

static void	ilist_display_rec(t_ilist *self, t_ilist *first)
{
	if (!self)
	{
		ft_printf("NULL");
		return ;
	}
	ft_printf("%d (radix index: %u)\n", self->val, self->radix_index);
	if (self->next && self->next != first)
	{
		ilist_display_rec(self->next, first);
	}
}

void	ft_ilist_display(t_ilist *self)
{
	ft_printf("ILIST: \n");
	ilist_display_rec(self, self);
	ft_printf("\n");
}
