/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:03:28 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/14 23:16:53 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "src/libft/libft.h"
#include "src/libft/printfft.h"
#include <stdlib.h>
#include <limits.h>

static int	is_arg_valid(char *arg)
{
	int		sign_flag;
	int		i;
	long	tmp;

	sign_flag = 0;
	i = 0;
	if (arg[i] == '\0')
		return (0);
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

static char	**sanitize_args(int argc, char **argv)
{
	char	**args;
	char	*concatenated_args;
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_trim(argv[i], ' ');
		++i;
	}
	concatenated_args = ft_join(argv + 1, argc - 1, ' ');
	if (!concatenated_args)
		return (NULL);
	args = ft_split(concatenated_args, ' ');
	free(concatenated_args);
	return (args);
}

static int	parse_args(char **args, t_ilist **stack_a)
{
	int	temp;
	size_t	i;

	i = 0;
	while (args && args[i])
	{
		if (*(args[i]))
		{
			temp = ft_atoi(args[i]);
			if (!is_arg_valid(args[i]) || ps_is_duplicate(stack_a, temp))
			{
				ft_ilist_delete(stack_a);
				ft_errorf("Error\n");
				return (1);
			}
			ft_ilist_push_back_val(stack_a, temp);
		}
		++i;
	}
	if (!(*stack_a))
	{
		ft_errorf("Error\n");
		return (1);
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
	char	**args;

	stack_a = NULL;
	stack_b = NULL;
	args = sanitize_args(argc, argv);
	err_ret = parse_args(args, &stack_a);
	ft_free_tab(args);
	if (!err_ret)
		err_ret = sort(&stack_a, &stack_b);
	ft_ilist_delete(&stack_a);
	ft_ilist_delete(&stack_b);
	return (err_ret);
}
