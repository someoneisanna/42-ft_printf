/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:55:48 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:21:19 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates and returns a new element. The variable ’content’ is
 * initialized with the value of the parameter ’content’. The variable ’next’
 * is initialized to NULL.
 * @param content The content to create the new element with.
 * @return The new element.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
	{
		return (NULL);
	}
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);

int main(void)
{
	char *content = "hey";
	t_list *new = ft_lstnew(content);
	if(!new)
		return 1;
	printf("%s\n", (char *)new->content);
}
*/
