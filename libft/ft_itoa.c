/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 14:40:11 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/13 11:29:07 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	itoa1(int n)
{
	int		i;
	int		j;

	i = 0;
	if (n == 0)
		return (0);
	j = n;
	if (j < 0)
		j = -j;
	while (j != 0)
	{
		j = j / 10;
		i++;
	}
	return (i);
}

static char	*itoa2(int i, int n)
{
	char	*s;

	if (i == 0)
		return ("0");
	if (n < 0)
		i++;
	s = (char*)malloc((i + 1) * sizeof(*s));
	return (s);
}

static char	*itoa3(int n, int i, char *s)
{
	while (n != 0)
	{
		s[i] = (char)((n % 10) + 48);
		n = n / 10;
		if (n < 0)
			n = -n;
		i--;
	}
	return (s);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		j;

	if (n == 0)
		return ("0");
	i = itoa1(n);
	s = itoa2(i, n);
	if (s == NULL)
		return (NULL);
	if (n < 0)
		i++;
	s[i] = '\0';
	i--;
	j = i;
	s = itoa3(n, i, s);
	if (n < 0)
	{
		s[j] = (char)((-(n % 10)) + 48);
		s[0] = '-';
	}
	return (s);
}
