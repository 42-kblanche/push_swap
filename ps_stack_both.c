/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_both.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:17:52 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/08 20:44:53 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "src/libft/printfft.h"

void	ps_swap_both(t_ilist **stack_a, t_ilist **stack_b)
{
	ft_ilist_swap(*stack_a);
	ft_ilist_swap(*stack_b);
	ft_printf("ss\n");
}

void	ps_rotate_both(t_ilist **stack_a, t_ilist **stack_b)
{
	ft_ilist_rotate(stack_a);
	ft_ilist_rotate(stack_b);
	ft_printf("rr\n");
}

void	ps_rrotate_both(t_ilist **stack_a, t_ilist **stack_b)
{
	ft_ilist_rrotate(stack_a);
	ft_ilist_rrotate(stack_b);
	ft_printf("rrr\n");
}
