/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_radix_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 17:14:21 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/11 18:08:12 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../listft.h"
#include <stddef.h>

void	ft_ilist_radix_index(t_ilist *self)
{
	size_t	size;
	t_ilist	*temp;
	t_ilist	*biggest;

	size = ft_ilist_get_size(self);
	while (size > 0)
	{
		temp = self;
		biggest = self;
		if (temp->radix_index)
			biggest = NULL;
		while (temp->next && temp->next != self)
		{
			temp = temp->next;
			if (!temp->radix_index && (!biggest || temp->val > biggest->val))
				biggest = temp;
		}
		if (biggest)
			biggest->radix_index = size;
		--size;
	}
}
