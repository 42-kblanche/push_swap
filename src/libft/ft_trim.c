/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:46:54 by kblanche          #+#    #+#             */
/*   Updated: 2026/04/14 23:08:33 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trim(char *str, char c)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	while (str[i] && str[i] == c)
		++i;
	start = i;
	i = ft_strlen(str);
	while (str[i - 1] == c)
		--i;
	len = i - start;
	ft_strlcpy(str, str + start, len + 1);
	str[len] = '\0';
}
