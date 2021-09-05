/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 22:05:11 by spencerwong       #+#    #+#             */
/*   Updated: 2021/08/23 22:47:11 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	found(const char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		len;
	int		i;
	char	*cpy;

	if (!s1)
		return (NULL);
	start = 0;
	while (s1[start] && found(s1[start], set))
		start ++;
	len = ft_strlen(s1);
	while (len > start && found(s1[len - 1], set))
		len --;
	cpy = (char *)malloc(sizeof(*s1) * (len - start + 1));
	i = 0;
	while (start < len)
		cpy[i++] = s1[start++];
	cpy[i] = '\0';
	return (cpy);
}
