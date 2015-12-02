/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:21:37 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/02 11:35:56 by rlemarch         ###   ########.fr       */
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
	printf("\n");
	write(1, s, 11);
	ft_strclr(s);
	printf("\n");
	write(1, s, 11);
	return (0);
}
