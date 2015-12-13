/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 11:46:41 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/13 12:22:44 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*res;

	res = ft_lstnew("hello, i'm a data", 18);
	printf("\n1\n\n");
	printf("%s\n%ld\n\n", (char*)res->content, res->content_size);
	free(res->content);
	printf("2\n\n");
	free(res);
	printf("3\n\n");
	return (0);
}
