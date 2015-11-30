/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:24:39 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 14:40:30 by rlemarch         ###   ########.fr       */
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

	s1 = "qwertyuiop4";
	s2 = "qwertyuiop9";
	n1 = ft_strncmp(s1, s2, 4);
	n2 = strncmp(s1, s2, 4);
	printf("%d\n%d\n", n1, n2);
	return (0);
}
