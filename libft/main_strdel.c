/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 09:54:52 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/02 10:28:21 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	int		n;

	n = 0;
	s = (char*)malloc(11 * sizeof(*s));
	while (n < 10)
	{
		s[n] = (char)(97 + n);
		n++;
	}
	s[n] = '\0';
	printf("\n%s\n", s);
	ft_strdel(&s);
	if (s == NULL)
		printf("NULL\n\n");
	else
		printf("%s\n\n", s);
	return (0);
}
