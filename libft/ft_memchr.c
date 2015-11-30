/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:32:24 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 10:43:34 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s1;
	char		*s2;
	char		c1;
	size_t		nb;

	s1 = s;
	c1 = (char)c;
	nb = 0;
	while ((nb < n) & (s1[nb] != c1))
		nb++;
	if (nb == n)
		return (NULL);
	else
	{
		s2 = (char*)s1;
		return (&s2[nb]);
	}
}
