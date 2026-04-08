/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_checks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:47:07 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/08 21:25:17 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_is_sorted(t_ilist **stack_a)
{
	int		ret;
	t_ilist	*tmp;

	ret = 1;
	tmp = *stack_a;
	while (ret && tmp->next != *stack_a)
	{
		if (tmp->next->val < tmp->val)
			ret = 0;
		tmp = tmp->next;
	}
	return (ret);
}

int	ps_is_duplicate(t_ilist **stack_a, int n)
{
	int		ret;
	t_ilist	*tmp;

	ret = 0;
	tmp = *stack_a;
	if (tmp->val == n)
		ret = 1;
	while (!ret && tmp->next != *stack_a)
	{
		if (tmp->next->val == n)
			ret = 1;
		tmp = tmp->next;
	}
	return (ret);
}
