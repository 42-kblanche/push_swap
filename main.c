/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 23:03:28 by kblanche          #+#    #+#             */
/*   Updated: 2026/02/04 11:58:27 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ilist.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	t_ilist	*stack_a;
	t_ilist	*stack_b;

	if (argc <= 1)
		return (0);
	stack_a = ft_ilist_val_new(ft_atoi(argv[--argc]));
	while (argc > 0)
	{
		ft_ilist_push_val(stack_a, ft_atoi(argv[--argc]));
	}
    ft_ilist_delete(&stack_a);
    ft_ilist_delete(&stack_b);
	return (0);
}
