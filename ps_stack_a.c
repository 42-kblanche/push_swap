/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_stack_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:17:52 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/11 18:20:46 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "src/libft/printfft.h"

void	ps_push_a(t_ilist **stack_a, t_ilist **stack_b)
{
	ft_ilist_pop_push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	ps_swap_a(t_ilist **stack_a)
{
	ft_ilist_swap(*stack_a);
	ft_printf("sa\n");
}

void	ps_rotate_a(t_ilist **stack_a)
{
	ft_ilist_rotate(stack_a);
	ft_printf("ra\n");
}

void	ps_rrotate_a(t_ilist **stack_a)
{
	ft_ilist_rrotate(stack_a);
	ft_printf("rra\n");
}

void	ps_push_rotate_a(t_ilist **stack_a, t_ilist **stack_b)
{
	ps_push_a(stack_a, stack_b);
	ps_rotate_a(stack_a);
}
