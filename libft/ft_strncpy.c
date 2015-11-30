/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 09:17:18 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 10:48:02 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	nb1;
	size_t	nb2;

	nb1 = 0;
	nb2 = 0;
	while (nb1 < n)
	{
		dst[nb1] = src[nb2];
		if (src[nb2] == '\0')
			nb2--;
		nb1++;
		nb2++;
	}
	return (dst);
}
