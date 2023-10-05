/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:50:45 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:08:45 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory for an array of nmemb elements of size bytes each.
 * Each element of the array is initialized to 0.
 * @param nitems Number of elements to be allocated in memory.
 * @param size Size of the elements to be allocated in memory.
 * @return A pointer to the allocated memory.
 */
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*mem;

	mem = malloc(nitems * size);
	if (mem != NULL)
	{
		ft_memset(mem, 0, (nitems * size));
	}
	return (mem);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i, n;
	int *a;

	printf("Number of elements to be entered:");
	scanf("%d",&n);

	a = (int*)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n",n);
	for( i=0 ; i < n ; i++ )
	{
		scanf("%d",&a[i]);
	}

	printf("The numbers entered are: ");
	for( i=0 ; i < n ; i++ )
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	free(a);
}
*/
