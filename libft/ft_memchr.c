/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:32:24 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/17 10:08:57 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*s1;
	unsigned char		l;
	size_t				nb;

	s1 = (unsigned char*)s;
	l = (unsigned char)c;
	nb = 0;
	while (nb < n)
	{
		if (s1[nb] == l)
			return ((void*)&s1[nb]);
		nb++;
	}
	return (NULL);
}
