/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:49:21 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 10:44:13 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		nb;
	char		*d;
	const char	*s1;
	char		*s2;

	d = dst;
	s1 = src;
	s2 = malloc(len);
	nb = 0;
	while (nb < len)
	{
		s2[nb] = s1[nb];
		nb++;
	}
	nb = 0;
	while (nb < len)
	{
		d[nb] = s2[nb];
		nb++;
	}
	return (d);
}
