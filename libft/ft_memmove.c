/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 15:49:21 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/17 10:00:35 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			nb;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	nb = 0;
	if (src < dst)
	{
		while ((len - nb) > 0)
		{
			d[len - nb - 1] = s[len - nb - 1];
			nb++;
		}
	}
	else
	{
		while (nb < len)
		{
			d[nb] = s[nb];
			nb++;
		}
	}
	return (d);
}
