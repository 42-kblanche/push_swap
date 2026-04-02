/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ilist.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:16:27 by kblanche          #+#    #+#             */
/*   Updated: 2026/02/04 11:36:41 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ILIST_H
# define FT_ILIST_H

typedef struct s_ft_list_int
{
	int						val;
	struct s_ft_list_int	*next;
	struct s_ft_list_int	*prev;
}	t_ilist;

t_ilist	*ft_ilist_new(void);
t_ilist	*ft_ilist_val_new(int val);
void	ft_ilist_delete(t_ilist	**list_head);
void	ft_ilist_set_val(t_ilist *self, int val);
void	ft_ilist_set_next(t_ilist *self, t_ilist *new_next);
void	ft_ilist_push(t_ilist *self, t_ilist *new_node);
void	ft_ilist_push_val(t_ilist *self, int val);
void	ft_ilist_swap(t_ilist *self);
t_ilist	*ft_ilist_pop(t_ilist *self);

#endif
