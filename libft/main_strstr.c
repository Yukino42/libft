/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 17:08:35 by rlemarch          #+#    #+#             */
/*   Updated: 2015/11/30 11:05:25 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*st1;
	char	*st2;

	s1 = "";
	s2 = "ty";
	st1 = (char*)malloc(11 * sizeof(*st1));
	st2 = (char*)malloc(11 * sizeof(*st2));
	st1 = ft_strstr(s1, s2);
	st2 = strstr(s1, s2);
	printf("%s\n%s\n\n", s1, s2);
	if (st1 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", st1);
	if (st2 == NULL)
		printf("NULL\n");
	else
		printf("%s\n", st2);
	return (0);
}
