/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:51:15 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:04:53 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s;
	char	*s1;
	char	*s2;

	s = "qwertyuiop";
	s1 = ft_memchr(s, 121, 11);
	s2 = memchr(s, 121, 11);
	write(1, s, 11);
	write(1, "\n", 1);
	write(1, s1, 6);
	write(1, "\n", 1);
	write(1, s2, 6);
	write(1, "\n", 1);
	return (0);
}
