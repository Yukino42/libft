/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:00:03 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/30 17:06:55 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	int		n1;
	int		n2;
	int		nb;

	n1 = 0;
	n2 = 0;
	nb = 0;
	s2 = (char*)malloc(33 * sizeof(*s2));
/*	printf("\n");
	while (nb < 34)
	{
		s2[0] = (char)nb;
		printf("%c\n", s2[0]);
		nb++;
	}*/
	s1 = "         -1234567890qwertyuiop1234567890";
	n1 = atoi(s1);
	n2 = ft_atoi(s1);
	printf("\n%d\n%d\n\n", n1, n2);
	return (0);
}
