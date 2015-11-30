/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:40:13 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:09:16 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*s1;
	char	*s2;

	s = "qwertyuiop";
	s1 = ft_strdup(s);
	s2 = strdup(s);
	printf("%s\n%s\n%s\n", s, s1, s2);
	return (0);
}
