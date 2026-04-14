/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:55:53 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/14 23:10:50 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join(char **strs, size_t size, char c)
{
	size_t	total_size;
	size_t	i;
	char	*ret;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		total_size += ft_strlen(strs[i]);
		++i;
	}
	ret = ft_calloc(total_size + 1, sizeof(char));
	i = 0;
	total_size = 0;
	while (i < size)
	{
		ft_strlcpy(ret + total_size, strs[i], ft_strlen(strs[i]) + 1);
		total_size += ft_strlen(strs[i]);
		ret[total_size] = c;
		++i;
		++total_size;
	}
	ret[total_size - 1] = '\0';
	return (ret);
}
