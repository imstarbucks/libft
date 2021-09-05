/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 21:36:06 by spencerwong       #+#    #+#             */
/*   Updated: 2021/08/26 22:37:04 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nblen(long n, int sign)
{
	int	len;

	len = 0;
	if (sign < 0)
		len += 1;
	if (n == 0)
		len += 1;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*temp;
	long	num;

	sign = 1;
	num = (long)n;
	if (num < 0)
		sign *= -1;
	num *= sign;
	len = ft_nblen(num, sign);
	temp = ft_calloc(len + 1, 1);
	if (!temp)
		return (NULL);
	if (sign == -1)
		temp[0] = '-';
	if (n == 0)
		temp[0] = '0';
	while (num)
	{
		temp[len-- - 1] = '0' + (num % 10);
		num /= 10;
	}
	return (temp);
}
