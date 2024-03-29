/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:57:10 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:39:10 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from memory area src to memory area dest. The memory
 * areas may overlap.
 * @param dest String to be copied to.
 * @param src String to be copied from.
 * @param n Number of bytes to be copied.
 * @return String dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	if (d > s)
	{
		while (n--)
		{
			*(d + n) = *(s + n);
		}
	}
	else
	{
		while (n--)
		{
			*(d + i) = *(s + i);
			i++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
	char src[] = "BCDEFG";
	char dest[100] = "AAAAAAA";

	memmove(dest, src, 5);
	printf("After real function: %s\n", dest);

	char src1[] = "BCDEFG";
	char dest1[100] = "AAAAAAA";

	ft_memmove(dest1, src1, 5);
	printf("After my function:   %s\n", dest1);
}
*/
