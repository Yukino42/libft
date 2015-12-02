/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:58:17 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/02 15:24:28 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		n;
	char	*c;

	n = 0;
	c = (char*)malloc((strlen(s) + 1) * sizeof(*s));
	if (c == NULL)
		return (NULL);
	while (s[n] != '\0')
	{
		c[n] = f(s[n]);
		n++;
	}
	c[n] = '\0';
	return (c);
}
