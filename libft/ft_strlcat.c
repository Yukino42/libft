/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:59:07 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/30 10:50:56 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	nb;
	size_t	res;

	n = 0;
	nb = 0;
	n = ft_strlen(src);
	nb = ft_strlen(dst);
	res = n + nb;
	if (size <= nb)
		return (n + size);
	size = size - nb - 1;
	n = 0;
	while ((n < size) & (src[n] != '\0'))
	{
		dst[nb] = src[n];
		n++;
		nb++;
	}
	if (n <= size & src[n] == '\0')
		dst[nb] = '\0';
	return (res);
}
