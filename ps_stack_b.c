/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:17:52 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/09 22:33:57 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "src/libft/printfft.h"

void	ps_push_b(t_ilist **stack_a, t_ilist **stack_b)
{
	ft_ilist_pop_push(stack_a, stack_b);
	ft_printf("pb\n");
}

void	ps_swap_b(t_ilist **stack_b)
{
	ft_ilist_swap(*stack_b);
	ft_printf("sb\n");
}

void	ps_rotate_b(t_ilist **stack_b)
{
	ft_ilist_rotate(stack_b);
	ft_printf("rb\n");
}

void	ps_rrotate_b(t_ilist **stack_b)
{
	ft_ilist_rrotate(stack_b);
	ft_printf("rrb\n");
}

void	ps_push_rotate_b(t_ilist **stack_a, t_ilist **stack_b)
{
	ps_push_b(stack_a, stack_b);
	ps_rotate_b(stack_b);
}
