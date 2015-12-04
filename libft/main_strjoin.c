/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:32:48 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/03 13:34:49 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*res;

	s1 = "my favorite animal is";
	s2 = " ";
	s3 = "the nyancat";
	res = (char*)malloc(100 * sizeof(*res));
	res = ft_strjoin(ft_strjoin(s1, s2), s3);
	printf("\n%s\n%s\n%s\n\n%s\n\n", s1, s2, s3, res);
	return (0);
}
