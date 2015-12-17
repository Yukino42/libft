/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:40:55 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/07 09:31:59 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*st1;
	int		n1;
	int		n2;
	int		n3;

	n1 = 0;
	st1 = (char*)s1;
	if (s2[0] == '\0')
		return (st1);
	while (st1[n1] != '\0')
	{
		n2 = n1;
		n3 = 0;
		while ((st1[n2] == s2[n3]) | (s2[n3] == '\0'))
		{
			if ((st1[n2] == '\0') & (s2[n3] != '\0'))
				return (NULL);
			if (s2[n3] == '\0')
				return (&st1[n1]);
			n2++;
			n3++;
		}
		n1++;
	}
	return (NULL);
}
