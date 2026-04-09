/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:46:51 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/10 00:01:10 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps_small_sort(t_ilist **stack_a, t_ilist **stack_b)
{
	int	size;
	int	min_node_dist;

	size = ps_stack_size(stack_a);
	if (size == 2)
		ps_swap_a(stack_a);
	if (size == 3)
	{
		if (ps_is_rotate_sorted(stack_a))
		{
			min_node_dist = ps_node_dist(stack_a, ps_find_min(stack_a));
			ps_smart_rotate_a(stack_a, min_node_dist);
		}
		else
			ps_swap_a(stack_a);
	}
	else
	{
		while (ps_stack_size(stack_a) > 3)
			ps_push_b(stack_a, stack_b);
		while (!ps_is_sorted(stack_a))
			ps_small_sort(stack_a, stack_b);
		if ((*stack_b)->val > (*stack_b)->next->val)
			ps_swap_b(stack_b);
		if ((*stack_a)->val > (*stack_b)->val)
			ps_push_a(stack_a, stack_b);
		else
			ps_rotate_a(stack_a);
		if ((*stack_a)->val > (*stack_b)->val)
			ps_push_a(stack_a, stack_b);
		else
			ps_rotate_a(stack_a);
		if (*stack_b)
		{
			if ((*stack_a)->val > (*stack_b)->val)
				ps_push_a(stack_a, stack_b);
			else
				ps_rotate_a(stack_a);
		}
	}
}

int	ps_large_sort(t_ilist **stack_a, t_ilist **stack_b)
{
	(void)stack_a;
	(void)stack_b;
	return (1);
}
