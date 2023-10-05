/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:56:20 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:29:38 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of c in string s.
 * @param s The string to be scanned.
 * @param c The character to be searched.
 * @param n The number of bytes to be scanned.
 * @return Pointer to the first occurrence of c in s, NULL otherwise.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*str;
	size_t		i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (char)c)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Hello There";
	char c = 'o';
	char *s;
	char *t;

	s = ft_memchr(str, c, 4);
	t = ft_memchr(str, c, 5);

	printf("String after '%c' is '%s'\n", c, s);
	printf("String after '%c' is '%s'\n", c, t);
}
*/
