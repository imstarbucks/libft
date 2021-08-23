/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 21:26:27 by spencerwong       #+#    #+#             */
/*   Updated: 2021/07/20 21:42:58 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n && (s1 || s2))
	{
		if (s1[c] != s2[c])
		{
			c = s1[c] - s2[c];
		}
		else
			c++;
	}
	return (c);
}
