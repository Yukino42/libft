/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:05:01 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:31:45 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	n;

	size = size + 1;
	n = 0;
	s = (char*)malloc(size * sizeof(*s));
	if (s == NULL)
		return (NULL);
	while (n < size)
	{
		s[n] = '\0';
		n++;
	}
	return (s);
}
