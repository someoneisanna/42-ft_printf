/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:00:26 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:00:43 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies up to size - 1 characters from the NULL-terminated string src to
 * dst, NULL-terminating the result.
 * @param dest The string to copy to.
 * @param src The string to copy from.
 * @param size The size of the destination buffer.
 * @return The total length of the string they tried to create.
 */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
#include <stdio.h>
#include <string.h>

size_t ft_strlcpy (char *dest, const char *src, size_t size);

int main(void)
{
	char *s = "abcdefghijklmn";
	char d[100] = "mnop";

	printf("%li\n", ft_strlcpy(d, s, 15));
	printf("%s\n", d);
}
*/
