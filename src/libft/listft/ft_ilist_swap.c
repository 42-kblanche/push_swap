/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:43:46 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/11 20:37:13 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../listft.h"

void	ft_ilist_swap(t_ilist *self)
{
	unsigned int	temp;

	if (self->next)
	{
		temp = self->next->val;
		self->next->val = self->val;
		self->val = temp;
		temp = self->next->radix_index;
		self->next->radix_index = self->radix_index;
		self->radix_index = temp;
	}
}
