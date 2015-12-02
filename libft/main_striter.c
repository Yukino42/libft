/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:41:51 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/02 14:35:45 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s;
	void	(*f)(char *);
	int		n;

	n = 0;
	s = (char*)malloc(11 * sizeof(*s));
	while (n < 11)
	{
		s[n] = (97 + n);
		n++;
	}
	s[n] = '\0';
	f = ft_toupper;
	printf("\n%s\n", s);
	ft_striter(s, f);
	printf("%s\n\n", s);
	return (0);
}
