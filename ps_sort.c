/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 21:46:51 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/13 15:56:01 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3(t_ilist **stack_a)
{
	int	min_node_dist;

	if (ps_is_rotate_sorted(stack_a))
	{
		min_node_dist = ps_node_dist(stack_a, ps_find_min(stack_a));
		ps_smart_rotate_a(stack_a, min_node_dist);
	}
	else
		ps_swap_a(stack_a);
}

void	ps_small_sort(t_ilist **stack_a, t_ilist **stack_b)
{
	int	size;

	size = ft_ilist_get_size(*stack_a);
	if (size == 2)
		ps_swap_a(stack_a);
	else if (size == 3)
		sort_3(stack_a);
	else
	{
		while (ft_ilist_get_size(*stack_b) < 2)
		{
			if ((*stack_a)->radix_index == 2 || (*stack_a)->radix_index == 1)
				ps_push_b(stack_a, stack_b);
			else
				ps_rotate_a(stack_a);
		}
		while (!ps_is_sorted(stack_a))
			sort_3(stack_a);
		if ((*stack_b)->radix_index < (*stack_b)->next->radix_index)
			ps_swap_b(stack_b);
		while (*stack_b)
			ps_push_a(stack_a, stack_b);
	}
}

int	ps_large_sort(t_ilist **stack_a, t_ilist **stack_b)
{
	static size_t	current_bit = 1;
	size_t			size;

	size = ft_ilist_get_size(*stack_a);
	while (size)
	{
		if (!((*stack_a)->radix_index & current_bit))
			ps_push_b(stack_a, stack_b);
		else
			ps_rotate_a(stack_a);
		--size;
	}
	while (*stack_b)
		ps_push_a(stack_a, stack_b);
	current_bit <<= 1;
	return (0);
}
