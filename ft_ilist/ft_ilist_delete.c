/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:53:59 by kblanche          #+#    #+#             */
/*   Updated: 2026/02/01 23:52:30 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ilist.h"
#include <stddef.h>
#include <stdlib.h>

static void	delete_recursive(t_ilist **to_delete, t_ilist **list_head)
{
	t_ilist	**next_node;

	if (*list_head != (*to_delete)->next)
	{
		next_node = &(*to_delete)->next;
		delete_recursive(next_node, list_head);
		(*to_delete)->next = NULL;
	}
	free(*to_delete);
}

void	ft_ilist_delete(t_ilist	**list_head)
{
	t_ilist	**next_node;

	if ((*list_head)->next)
	{
		next_node = &(*list_head)->next;
		delete_recursive(next_node, list_head);
		(*list_head)->next = NULL;
	}
	free(*list_head);
    *list_head = NULL;
}
