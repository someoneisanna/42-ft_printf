/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:54:33 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:18:24 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Takes as a parameter an element and frees the memory of the element’s
 * content using the function ’del’ given as a parameter and free the element.
 * @param lst The element to free.
 * @param del The address of the function used to delete the content.
 * @return Nothing.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del || !lst)
	{
		return ;
	}
	del(lst->content);
	free(lst);
	lst = NULL;
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void ft_lstdelone(t_list *lst, void (*del)(void *));

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}

void delete(void *content)
{
	free(content);
}

int main(void)
{
	t_list	*node1=ft_lstnew(strdup("1"));
	t_list	*node2=ft_lstnew(strdup("2"));
	t_list	*node3=ft_lstnew(strdup("3"));
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstdelone(node3, delete);
	while(node1)
	{
		printf("%s\n", (char *)node1->content);
		node1 = node1->next;
	}
}
*/
