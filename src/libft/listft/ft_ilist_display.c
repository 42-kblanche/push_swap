/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_display.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:58:40 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/08 18:31:34 by kblanche         ###   ########.fr       */
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
	ft_printf("%d ", self->val);
	if (self->next && self->next != first)
	{
		ilist_display_rec(self->next, first);
	}
}

void	ft_ilist_display(t_ilist *self)
{
	ft_printf("ILIST: ");
	ilist_display_rec(self, self);
	ft_printf("\n");
}
