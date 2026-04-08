/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:03:28 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/08 18:51:21 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/libft/listft.h"
#include "src/libft/libft.h"
#include "src/libft/printfft.h"

int	main(int argc, char **argv)
{
	t_ilist	*stack_a;
	t_ilist	*stack_b;

	if (argc <= 1)
		return (0);
	stack_a = ft_ilist_val_new(ft_atoi(argv[--argc]));
	stack_b = NULL;
	ft_printf("CREATING STACK A\n");
	ft_ilist_display(stack_a);
	while (argc > 0)
	{
		ft_ilist_push_front_val(&stack_a, ft_atoi(argv[--argc]));
		ft_ilist_display(stack_a);
	}

	ft_printf("SWAP STACK A\n");
	ft_ilist_swap(stack_a);
	ft_ilist_display(stack_a);
	
	ft_printf("ROTATE STACK A\n");
	ft_ilist_rotate(&stack_a);
	ft_ilist_display(stack_a);

	ft_printf("PUSHB\n");
	ft_ilist_pop_push(&stack_a, &stack_b);
	ft_ilist_display(stack_a);
	ft_ilist_display(stack_b);

	ft_printf("PUSHB\n");
	ft_ilist_pop_push(&stack_a, &stack_b);
	ft_ilist_display(stack_a);
	ft_ilist_display(stack_b);

	ft_printf("PUSHB\n");
	ft_ilist_pop_push(&stack_a, &stack_b);
	ft_ilist_display(stack_a);
	ft_ilist_display(stack_b);

	ft_printf("PUSHB (LAST)\n");
	ft_ilist_pop_push(&stack_a, &stack_b);
	ft_ilist_display(stack_a);
	ft_ilist_display(stack_b);

	ft_printf("PUSHB (EMPTY)\n");
	ft_ilist_pop_push(&stack_a, &stack_b);
	ft_ilist_display(stack_a);
	ft_ilist_display(stack_b);

	ft_printf("DELETING STACKS\n");
    ft_ilist_delete(&stack_a);
    ft_ilist_delete(&stack_b);
	return (0);
}
