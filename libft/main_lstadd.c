/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 15:14:06 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/14 15:32:45 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = ft_lstnew("hello, i'm a data", 18);
	lst2 = ft_lstnew("hello, i'm another data", 24);
	printf("\n%s\n%ld\n\n%s\n%ld\n\n", (char *)lst1->content, lst1-> content_size, (char *)lst2->content, lst2->content_size);
	ft_lstadd(&lst2, lst1);
	printf("%s\n%ld\n\n", (char *)(lst1->next)->content, (lst1->next)->content_size);
	return (0);
}
