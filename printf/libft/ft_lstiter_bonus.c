/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:54:49 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:19:10 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function ’f’ to the content
 * of each element.
 * @param lst The address of a pointer to an element.
 * @param f The address of the function used to iterate on the list.
 * @return Nothing.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
	{
		return ;
	}
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
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

void ft_lstiter(t_list *lst, void (*f)(void *));

void print(void *content)
{
	printf("Content: %s\n", (char *)content);
}

int main(void)
{
	void *content = (char *)content;
	t_list *head = NULL;
	head = (t_list *) malloc(sizeof(t_list));
	head->content = "1";
	head->next = (t_list *) malloc(sizeof(t_list));
	head->next->content = "2";
	head->next->next = NULL;

	ft_lstiter(head, &print);
}
*/
