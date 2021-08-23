/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spencerwongyeongli <spencerwongyeongli@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 21:21:18 by spencerwong       #+#    #+#             */
/*   Updated: 2021/07/23 21:51:22 by spencerwong      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define	LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void	*dest, const void *src, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
#endif
