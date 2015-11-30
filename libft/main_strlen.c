/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:12:41 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:09:47 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	size_t	n1;
	size_t	n2;

	n1 = 0;
	n2 = 0;
	s = "qwertyuiop";
	n1 = ft_strlen(s);
	n2 = strlen(s);
	printf("%s\n%ld\n%ld\n", s, n1, n2);
}
