/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:56:50 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:39:20 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest. The memory
 * areas must not overlap.
 * @param dest String to be copied to.
 * @param src String to be copied from.
 * @param n Number of bytes to be copied.
 * @return String dest.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*s;
	char		*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if ((dest == NULL) && (src == NULL))
	{
		return (NULL);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "anna";
	char str2[70] = "jn";

	memcpy(str2, str1, 1);
	printf("After real function: %s\n", str2);

	char str3[] = "anna";
	char str4[70] = "jn";

	ft_memcpy(str4, str3, 1);
	printf("After my function:   %s\n", str4);
}
*/
