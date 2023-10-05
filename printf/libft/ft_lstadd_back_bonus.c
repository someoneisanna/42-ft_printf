/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:53:20 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:16:36 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Adds the element new at the end of the list.
 * @param lst The address of a pointer to the first link of a list.
 * @param new The address of a pointer to the element to be added to the list.
 * @return Nothing.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (lst)
	{
		if (!(*lst))
		{
			*lst = new;
		}
		else
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = new;
		}
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

void ft_lstadd_back(t_list **lst, t_list *new);

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

int main(void)
{
	t_list	*lst;
	lst = ft_lstnew("test");
	ft_lstadd_back(&lst, ft_lstnew("1"));
	ft_lstadd_back(&lst, ft_lstnew("2"));
	ft_lstadd_back(&lst, ft_lstnew("3"));
	while(lst)
	{
		printf("%s\n",(char *)lst->content);
		lst = lst->next;
	}
}
*/
