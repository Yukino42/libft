/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:31:40 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/03 13:34:30 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		n;
	int		nb;

	n = 0;
	nb = 0;
	s3 = (char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(*s3));
	if (s3 == NULL)
		return (NULL);
	while (s1[n] != '\0')
	{
		s3[n] = s1[n];
		n++;
	}
	while (s2[nb] != '\0')
	{
		s3[n] = s2[nb];
		n++;
		nb++;
	}
	s3[n] = '\0';
	return (s3);
}
