/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:10:59 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:17:08 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = malloc(100);
	b = malloc(100);
	c = malloc(100);
	b = &a[6];
	c = &a[6];
	a = ft_memset(a, 66, 11);
	b = ft_memset(b, 65, 11);
	c = ft_memset(c, 65, 11);
	printf("%s\n%s\n%s\n\n", a, b, c);
	b = ft_memmove(b, a, 11);
	c = memmove(c, a, 11);
	printf("%s\n%s\n%s\n", a, b, c);
	return (0);
}
