/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:10:36 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:28:06 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		nb;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	nb = 0;
	while (nb < n)
	{
		d[nb] = s[nb];
		nb++;
	}
	return (d);
}
