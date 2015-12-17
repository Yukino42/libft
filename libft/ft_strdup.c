/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:28:42 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:29:49 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		n;
	int		nb;

	n = 0;
	nb = 0;
	n = ft_strlen(s1) + 1;
	s2 = (char*)malloc(n * sizeof(*s2));
	if (s2 == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (nb < n)
	{
		s2[nb] = s1[nb];
		nb++;
	}
	s2[nb] = '\0';
	return (s2);
}
