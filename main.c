/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:03:28 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/10 00:01:09 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "src/libft/libft.h"
#include "src/libft/printfft.h"

static int	parse_args(int argc, char **argv, t_ilist **stack_a)
{
	int	temp;

	if (argc <= 1)
		return (1);
	*stack_a = ft_ilist_val_new(ft_atoi(argv[--argc]));
	while (argc > 1)
	{
		temp = ft_atoi(argv[--argc]);
		if (ps_is_duplicate(stack_a, temp))
		{
			ft_ilist_delete(stack_a);
			ft_errorf("Error\n");
			return (1);
		}
		ft_ilist_push_front_val(stack_a, temp);
	}
	return (0);
}

static int	sort(t_ilist **stack_a, t_ilist **stack_b)
{
	int	err_ret;
	int	size;

	err_ret = 0;
	size = ps_stack_size(stack_a);
	while (!err_ret && !ps_is_sorted(stack_a))
	{
		if (size <= 5)
			ps_small_sort(stack_a, stack_b);
		else
			err_ret = ps_large_sort(stack_a, stack_b);
	}
	ft_ilist_display(*stack_a);
	return (err_ret);
}

int	main(int argc, char **argv)
{
	int		err_ret;
	t_ilist	*stack_a;
	t_ilist	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	err_ret = parse_args(argc, argv, &stack_a);
	if (!err_ret)
		err_ret = sort(&stack_a, &stack_b);
	ft_ilist_delete(&stack_a);
	ft_ilist_delete(&stack_b);
	return (err_ret);
}
