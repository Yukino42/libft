/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:09:09 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/30 11:21:37 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*str2(const char *s1, const char *s2, size_t n, char *c)
{
	int		n2;
	int		n3;

	n2 = 0;
	n3 = 0;
	while (((s1[n2] == s2[n3]) | (s2[n3] == '\0')) & (n > 0))
	{
		if ((s1[n2] == '\0') & (s2[n3] != '\0'))
			return (NULL);
		if (s2[n3] == '\0')
			return ((char*)s1);
		n2++;
		n3++;
		n--;
	}
	return (c);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		n1;
	int		n2;
	int		n3;
	char	*c;
	char	c1;

	n1 = 0;
	c1 = 'a';
	n = n + 1;
	c = &c1;
	if (s2[0] == '\0')
		return ((char*)s1);
	while ((s1[n1] != '\0') & (n > 0))
	{
		n2 = n1;
		n3 = 0;
		c = str2(&s1[n2], &s2[n3], n, c);
		if (c != &c1)
			return (c);
		n1++;
		n--;
	}
	return (NULL);
}
