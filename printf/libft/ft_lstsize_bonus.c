/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:56:08 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:21:46 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of elements in a list.
 * @param lst The beginning of the list.
 * @return The length of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*ptr;

	counter = 0;
	ptr = lst;
	while (ptr)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}

/*
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int ft_lstsize(t_list *lst);

int main(void)
{
	void *content = (char *)content;
	t_list *head = NULL;
	head = (t_list *) malloc(sizeof(t_list));
	head->content = "1";
	head->next = (t_list *) malloc(sizeof(t_list));
	head->next->content = "2";
	head->next->next = NULL;

	printf("%i\n", ft_lstsize(head));
}
*/
