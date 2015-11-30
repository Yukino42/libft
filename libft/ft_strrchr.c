/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:17:59 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 10:48:21 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	char	ch;
	int		n;

	st = (char*)s;
	ch = (char)c;
	n = 0;
	n = ft_strlen(st);
	while (n > -1)
	{
		if (st[n] == c)
			return (&st[n]);
		n--;
	}
	return (NULL);
}
