/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:07:12 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/30 10:37:49 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define A 15

int	main(void)
{
	char	s1[0xF00] = "there is no starts in the sky";
	char	s2[0xF00] = "there is no starts in the sky";
	char	*s3 = "the cake is a lie !\0I'm hidden lol\r\n";
	size_t	n1;
	size_t	n2;
	size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;

/*	s1 = (char*)malloc(21 * sizeof(*s1));
	s2 = (char*)malloc(21 * sizeof(*s2));
	ft_bzero(s1, 11);
	s1 = ft_memset(s1, 65, 10);
	ft_bzero(s2, 11);
	s2 = ft_memset(s2, 65, 10);
	s3 = "qwertyuiop";*/
	n1 = ft_strlcat(s1, s3, max);
	n2 = strlcat(s2, s3, max);
	printf("%s\n%s\n%s\n%ld\n%ld\n%ld\n", s3, s1, s2, n1, n2, max);
	return (0);
}
