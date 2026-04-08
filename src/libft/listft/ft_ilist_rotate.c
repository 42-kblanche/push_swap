/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:43:46 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/08 17:54:33 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../listft.h"

void	ft_ilist_rotate(t_ilist **self)
{
	if ((*self)->next)
		*self = (*self)->next;
}

void	ft_ilist_rrotate(t_ilist **self)
{
	if ((*self)->prev)
		*self = (*self)->prev;
}
