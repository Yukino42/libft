/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlemarch <rlemarch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 13:47:19 by rlemarch          #+#    #+#             */
/*   Updated: 2015/12/14 14:33:50 by rlemarch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr1;
	t_list	*ptr2;

	ptr1 = *alst;
	while (ptr1->next != NULL)
	{
		ptr2 = ptr1;
		del(ptr1->content, ptr1->content_size);
		ptr1 = ptr1->next;
		free(ptr2);
	}
	if (ptr1->next == NULL)
	{
		del(ptr1->content, ptr1->content_size);
		free(ptr1);
	}
	*alst = NULL;
}
