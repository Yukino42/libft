/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 13:48:07 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 14:20:01 by rlemarch         ###   ########.fr       */
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

	s1 = "qwertyuiopp";
	s2 = "qwertyuiop";
	n1 = ft_strcmp(s1, s2);
	n2 = strcmp(s1, s2);
	printf("%d\n%d\n", n1, n2);
	return (0);
}
