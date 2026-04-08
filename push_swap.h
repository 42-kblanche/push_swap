/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:12:52 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/08 21:49:19 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "src/libft/listft.h"

void	ps_push_a(t_ilist **stack_a, t_ilist **stack_b);
void	ps_swap_a(t_ilist **stack_a);
void	ps_rotate_a(t_ilist **stack_a);
void	ps_rrotate_a(t_ilist **stack_a);

void	ps_push_b(t_ilist **stack_a, t_ilist **stack_b);
void	ps_swap_b(t_ilist **stack_b);
void	ps_rotate_b(t_ilist **stack_b);
void	ps_rrotate_b(t_ilist **stack_b);

void	ps_swap_both(t_ilist **stack_a, t_ilist **stack_b);
void	ps_rotate_both(t_ilist **stack_a, t_ilist **stack_b);
void	ps_rrotate_both(t_ilist **stack_a, t_ilist **stack_b);

int		ps_is_sorted(t_ilist **stack_a);
int		ps_is_duplicate(t_ilist **stack_a, int n);

int		ps_small_sort();
int		ps_large_sort();

#endif
