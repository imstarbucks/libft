/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 22:32:47 by spencerwong       #+#    #+#             */
/*   Updated: 2021/07/20 22:44:37 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char	*str)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		sign = -1;
	++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		sum = sum * 10 + (*str - 48);
		++str;
	}
	return (sum * sign);
}
