/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 10:30:22 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/14 12:45:41 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_free(void *cont, size_t cont_size)
{
	free(cont);
	cont_size = 0;
}

int		main(void)
{
	t_list	*res;

	res = ft_lstnew("hello, i'm a data", 18);
	printf("\n%s\n%ld\n\n", (char *)res->content, res->content_size);
	ft_lstdelone(&res, ft_free);
	if (res == NULL)
		printf("NULL\n\n");
	else
		printf("\n%s\n%ld\n\n", (char *)res->content, res->content_size);
	return (0);
}
