/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 18:50:40 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/13 15:56:31 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ilist	*ps_find_min(t_ilist **stack_a)
{
	t_ilist	*ret;
	t_ilist	*tmp;

	tmp = *stack_a;
	ret = *stack_a;
	while (tmp->next != *stack_a)
	{
		if (tmp->next->radix_index < ret->radix_index)
			ret = tmp->next;
		tmp = tmp->next;
	}
	return (ret);
}

int	ps_node_dist(t_ilist **stack_a, t_ilist *goal)
{
	t_ilist	*tmp;
	int		ret;

	if (*stack_a == goal)
		return (0);
	tmp = *stack_a;
	ret = 1;
	while (tmp->next != *stack_a && tmp->next != goal)
	{
		++ret;
		tmp = tmp->next;
	}
	if (tmp->next != goal)
		ret = -1;
	return (ret);
}

void	ps_smart_rotate_a(t_ilist **stack_a, int dist)
{
	int	size;

	size = ft_ilist_get_size(*stack_a);
	if (dist > size / 2)
		ps_rrotate_a(stack_a);
	else
		ps_rotate_a(stack_a);
}

void	ps_smart_rotate_b(t_ilist **stack_b, int dist)
{
	int	size;

	size = ft_ilist_get_size(*stack_b);
	if (dist > size / 2)
		ps_rrotate_b(stack_b);
	else
		ps_rotate_b(stack_b);
}
