/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:55:34 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:20:33 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element. Creates a new list resulting of the successive applications
 * of the function ’f’. The ’del’ function is used to delete the content of an
 * element if needed.
 * @param lst The address of a pointer to the first link of a list.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of an
 * element if needed.
 * @return t_list* The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*result;

	result = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!(node))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}

/*
#include <stdio.h>

void *f(void *content)
{
	printf("Content: %s\n", (char *)content);
	return ("anything");
}

int main (void)
{
	void *content = (char *)content;
	t_list *head = NULL;
	head = (t_list *) malloc(sizeof(t_list));
	head->content = "1";
	head->next = (t_list *) malloc(sizeof(t_list));
	head->next->content = "2";
	head->next->next = NULL;

	ft_lstmap(head, &f, free);
}
*/
