/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:52:23 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 13:41:27 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*st1;
	const unsigned char	*st2;
	size_t				nb;
	int					res;

	st1 = s1;
	st2 = s2;
	res = 0;
	nb = 0;
	while (nb < n)
	{
		res = res + (st1[nb] - st2[nb]);
		if (st1[nb] != st2[nb])
			nb = n - 1;
		nb++;
	}
	return (res);
}
