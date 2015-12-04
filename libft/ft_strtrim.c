/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:02:03 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/03 16:22:45 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		trimlen(const char *s)
{
	int		n1;
	int		n2;
	int		nb;

	n1 = 0;
	n2 = 0;
	nb = 0;
	while ((s[n1 + nb] == ' ') | (s[n1 + nb] == '\n') | (s[n1 + nb] == '\t'))
		nb++;
	while (s[n1 + nb] != '\0')
	{
		n2 = nb;
		while (s[n1 + nb] == ' ' | s[n1 + nb] == '\n' | s[n1 + nb] == '\t')
			nb++;
		if (s[n1 + nb] == '\0')
			n1--;
		else
			nb = n2;
		n1++;
	}
	return (n1 + 1);
}

char	*trimtest(const char *s, char *c, int n1)
{
	int		n2;
	int		nb;

	n2 = 0;
	nb = 0;
	while ((s[n1] != '\0') & (s[nb] != '\0'))
	{
		nb = n1;
		while ((s[nb] == ' ') | (s[nb] == '\n') | (s[nb] == '\t'))
		{
			nb++;
		}
		if (s[nb] != '\0')
		{
			c[n2] = s[n1];
			n2++;
		}
		n1++;
	}
	c[n2] = '\0';
	return (c);
}

char	*ft_strtrim(char const *s)
{
	char	*c;
	int		n1;
	int		n2;
	int		nb;

	n1 = 0;
	n2 = 0;
	nb = 0;
	n1 = trimlen(s);
	c = (char*)malloc(n1 * sizeof(*c));
	if (c == NULL)
		return (NULL);
	n1 = 0;
	while ((s[n1] == ' ') | (s[n1] == '\n') | (s[n1] == '\t'))
		n1++;
	c = trimtest(s, c, n1);
	return (c);
}
