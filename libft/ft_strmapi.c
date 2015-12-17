/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:47:18 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/10 09:23:18 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		n;
	char	*c;

	n = 0;
	c = (char*)malloc((ft_strlen(s) + 1) * sizeof(*s));
	if (c == NULL)
		return (NULL);
	while (s[n] != '\0')
	{
		c[n] = f(n, s[n]);
		n++;
	}
	c[n] = '\0';
	return (c);
}
