/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:57:20 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:41:49 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Fills the first n bytes of the memory area pointed to by s with the
 * constant byte c.
 * @param s String to be filled.
 * @param x Constant byte to fill with.
 * @param n Number of bytes to be filled.
 * @return String s.
 */
void	*ft_memset(void *s, int x, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		*(str + i) = x;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

void *ft_memset(void *ptr, int x, size_t n);

int main(void)
{
	char str[] = "Anna Carolina";
	char *str1 = str;

	memset(str + 5, '2', 5 * sizeof(char));
	printf("After real function: %s\n", str);

	ft_memset(str1 + 5, '2', 5 * sizeof(char));
	printf("After my function:   %s\n", str1);
}
*/
