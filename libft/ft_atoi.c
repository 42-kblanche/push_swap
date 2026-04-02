/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:43:49 by kblanche          #+#    #+#             */
/*   Updated: 2026/02/01 23:24:16 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void	init(int *i, int *sign, int *ret)
{
	*i = 0;
	*sign = 1;
	*ret = 0;
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	ret;

	init(&i, &sign, &ret);
	while (str[i] && ft_isspace(str[i]))
		++i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		ret = ret * 10 + (str[i] - '0');
		++i;
	}
	return (ret * sign);
}
