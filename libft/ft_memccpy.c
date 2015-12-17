/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:31:22 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:27:57 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		nb;
	char		*d;
	const char	*s;
	char		ch;

	d = dst;
	s = src;
	ch = (char)c;
	nb = 0;
	while ((nb < n) & (s[nb] != ch))
	{
		d[nb] = s[nb];
		nb++;
	}
	if (nb == n)
		return (NULL);
	else
	{
		d[nb] = s[nb];
		return (&d[nb + 1]);
	}
}
