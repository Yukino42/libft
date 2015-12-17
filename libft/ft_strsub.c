/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 09:39:28 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:32:01 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*c;
	int		n;

	n = 0;
	c = (char*)malloc((len + 1) * sizeof(*c));
	if (c == NULL)
		return (NULL);
	while (len > 0)
	{
		c[n] = s[start];
		len--;
		start++;
		n++;
	}
	c[n] = '\0';
	return (c);
}
