/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listft.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:16:27 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/14 22:46:45 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LISTFT_H
# define LISTFT_H

typedef struct s_ft_list_int
{
	int						val;
	unsigned int			radix_index;
	struct s_ft_list_int	*next;
	struct s_ft_list_int	*prev;
}	t_ilist;

t_ilist	*ft_ilist_new(void);
t_ilist	*ft_ilist_val_new(int val);
void	ft_ilist_delete(t_ilist	**list_head);
int		ft_ilist_get_size(t_ilist *self);
t_ilist	*ft_ilist_pop(t_ilist **self);
void	ft_ilist_pop_push(t_ilist **self, t_ilist **other);
void	ft_ilist_push_back(t_ilist **self, t_ilist *new_node);
void	ft_ilist_push_back_val(t_ilist **self, int val);
void	ft_ilist_push_front(t_ilist **self, t_ilist *new_node);
void	ft_ilist_push_front_val(t_ilist **self, int val);
void	ft_ilist_radix_index(t_ilist *self);
void	ft_ilist_rotate(t_ilist **self);
void	ft_ilist_rrotate(t_ilist **self);
void	ft_ilist_swap(t_ilist *self);
void	ft_ilist_display(t_ilist *self);
#endif
