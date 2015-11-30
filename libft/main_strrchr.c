/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:17:42 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/28 11:10:34 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	*s1;
	char	*s2;

	s = "qwertqwert";
	s1 = (char*)malloc(11 * sizeof(*s1));
	s2 = (char*)malloc(11 * sizeof(*s2));
	s1 = ft_strrchr(s, 101);
	s2 = strrchr(s, 101);
	printf("%s\n", s);
	if (s1 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", s1);
	if (s2 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", s2);
	return (0);
}
