/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:36:56 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:29:23 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*st;
	char	ch;
	int		n;

	st = (char*)s;
	ch = (char)c;
	n = 0;
	while (st[n] != '\0')
	{
		if (st[n] == ch)
			return (&st[n]);
		n++;
	}
	if (ch == '\0')
		return (&st[n]);
	return (NULL);
}
