/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:01:12 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:03:14 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function f to each character of the string passed as
 * argument by giving its index as first argument to create a “fresh” new string
 * (with malloc(3)) resulting from the successive applications of f.
 * @param s String on which to iterate.
 * @param f The function to apply to each character.
 * @return The “fresh” string created from the successive applications of f.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;

	i = 0;
	if (!s)
		return (NULL);
	new = (char *)malloc((sizeof(char) * ft_strlen(s)) + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char test_func(unsigned int i, char c) // increases every element by its index
{
	return (c + i);
}

int	main(void)
{
	char	str1[] = "abc";
	char	(*f)(unsigned int, char) = &test_func;

	printf("str1: %s\n", ft_strmapi(str1, (f)));
}
*/
