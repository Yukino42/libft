/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:24:37 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/30 11:44:35 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*st1;
	unsigned char	*st2;
	size_t	nb;
	int		res;

	st1 = (unsigned char*)s1;
	st2 = (unsigned char*)s2;
	res = 0;
	nb = 0;
	while ((st1[nb] != '\0') & (st2[nb] != '\0') & (nb < n))
	{
		res = (st1[nb] - st2[nb]);
		if (res != 0)
			return (res);
		nb++;
	}
	if (((st1[nb] == '\0') | (st2[nb] == '\0')) & (nb < n))
		res = (st1[nb] - st2[nb]);
	return (res);
}
