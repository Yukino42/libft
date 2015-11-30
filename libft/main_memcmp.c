/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:55:58 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 13:44:36 by rlemarch         ###   ########.fr       */
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

	s1 = "qwertyuiop";
	s2 = "qwerty";
	n1 = ft_memcmp(s1, s2, 11);
	n2 = memcmp(s1, s2, 11);
	printf("%d\n%d\n", n1, n2);
	return (0);
}
