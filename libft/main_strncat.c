/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:18:16 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:10:04 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = (char*)malloc(21 * sizeof(*s1));
	s2 = (char*)malloc(21 * sizeof(*s2));
	ft_bzero(s1, 11);
	s1 = ft_memset(s1, 65, 10);
	ft_bzero(s2, 11);
	s2 = ft_memset(s2, 65, 10);
	s3 = "qwertyuiop";
	s1 = ft_strncat(s1, s3, 5);
	s2 = strncat(s2, s3, 5);
	printf("%s\n%s\n%s\n", s3, s1, s2);
	return (0);
}
