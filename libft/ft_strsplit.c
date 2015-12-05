/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 09:25:35 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/04 14:18:18 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**mem1(char const *s, char c)
{
	char	**res;
	int		n1;
	int		n2;

	n1 = 0;
	n2 = 0;
	while (s[n1] != '\0')
	{
		if ((s[n1] != c) & ((s[n1 + 1] == c) | (s[n1 + 1] == '\0')))
			n2++;
		n1++;
	}
	if (n2 == 0)
	{
		res = (char**)malloc(1 * sizeof(*res));
		*res = "\0";
		return (res);
	}
	res = (char**)malloc(n2 * sizeof(*res));
	if (res == NULL)
		return (NULL);
	return (res);
}

char	*mem2(char const *s, char **res, char c)
{
	int		n1;
	int		n3;
	int		n4;

	n1 = 0;
	n3 = 0;
	n4 = 0;
	while (s[n1] != '\0')
	{
		if (s[n1] != c)
			n4++;
		if ((s[n1] != c) & ((s[n1 + 1] == c) | (s[n1 + 1] == '\0')))
		{
			res[n3] = (char*)malloc((n4 + 1) * sizeof(**res));
			if (res == NULL)
				return (NULL);
			n3++;
			n4 = 0;
		}
		n1++;
	}
	return ("ok");
}

char	**mem3(char const *s, char **res, char c)
{
	int		n1;
	int		n3;
	int		n4;

	n1 = 0;
	n3 = 0;
	n4 = 0;
	while (s[n1] != '\0')
	{
		if (s[n1] != c)
		{
			res[n3][n4] = s[n1];
			n4++;
		}
		if ((s[n1] != c) & ((s[n1 + 1] == c) | (s[n1 + 1] == '\0')))
		{
			res[n3][n4] = '\0';
			n3++;
			n4 = 0;
		}
		n1++;
	}
	return (res);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		n1;
	int		n3;
	int		n4;
	char	*l;

	n1 = 0;
	n3 = 0;
	n4 = 0;
	l = "a";
	res = mem1(s, c);
	if ((res == NULL) | (s[0] == '\0'))
		return (res);
	l = mem2(s, res, c);
	if (l == NULL)
		return (NULL);
	res = mem3(s, res, c);
	return (res);
}
