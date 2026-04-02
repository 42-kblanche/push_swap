/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 21:44:21 by kblanche          #+#    #+#             */
/*   Updated: 2026/02/01 23:34:13 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_ilist.h"
#include <stddef.h>
#include <stdlib.h>

t_ilist	*ft_ilist_new(void)
{
	t_ilist	*ret;

	ret = malloc(sizeof(t_ilist));
	ret->val = 0;
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}

t_ilist	*ft_ilist_val_new(int val)
{
	t_ilist	*ret;

	ret = malloc(sizeof(t_ilist));
	ret->val = val;
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}
