/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:03:28 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/13 16:10:46 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "src/libft/libft.h"
#include "src/libft/printfft.h"
#include <limits.h>

static int	is_arg_valid(char *arg)
{
	int		sign_flag;
	int		i;
	long	tmp;

	sign_flag = 0;
	i = 0;
	while (arg[i])
	{
		if (ft_isdigit(arg[i]))
			sign_flag = 1;
		else
		{
			if (sign_flag || arg[i] != '-')
				return (0);
		}
		++i;
	}
	tmp = ft_atol(arg);
	if (tmp > INT_MAX || tmp < INT_MIN)
		return (0);
	return (1);
}

static int	parse_args(int argc, char **argv, t_ilist **stack_a)
{
	int	temp;

	if (argc < 1)
		return (1);
	if (!is_arg_valid(argv[--argc]))
	{
		ft_errorf("Error\n");
		return (1);
	}
	if (argc < 1)
		return (1);
	*stack_a = ft_ilist_val_new(ft_atoi(argv[argc]));
	while (argc > 1)
	{
		temp = ft_atoi(argv[--argc]);
		if (!is_arg_valid(argv[argc]) || ps_is_duplicate(stack_a, temp))
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
	size = ft_ilist_get_size(*stack_a);
	ft_ilist_radix_index(*stack_a);
	while (!err_ret && !ps_is_sorted(stack_a))
	{
		if (size <= 5)
			ps_small_sort(stack_a, stack_b);
		else
			err_ret = ps_large_sort(stack_a, stack_b);
	}
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
