/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 21:52:30 by spencerwong       #+#    #+#             */
/*   Updated: 2021/07/20 21:44:37 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n)
	{
		if (((unsigned char *)s1)[count] != ((unsigned char *)s2)[count])
			return (((unsigned char *)s1)[count] -
			((unsigned char *)s2)[count]);
		count++;
	}
	return (0);
}
