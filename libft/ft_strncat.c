/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:13:54 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:31:36 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	nb1;
	size_t	nb2;

	nb1 = 0;
	nb2 = 0;
	while (s1[nb1] != '\0')
		nb1++;
	while ((s2[nb2] != '\0') & (nb2 < n))
	{
		s1[nb1] = s2[nb2];
		nb1++;
		nb2++;
	}
	s1[nb1] = '\0';
	return (s1);
}
