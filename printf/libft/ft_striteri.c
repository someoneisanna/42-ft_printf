/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:59:46 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:55:25 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function ’f’ to each character of the string ’s’.
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return Nothing.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s)
	{
		return ;
	}
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test_func(unsigned int i, char *s) // increases every element by its index
{
	*s += i;
}

int	main(void)
{
	char	str1[] = "abcde";
	void	(*f)(unsigned int, char *) = &test_func;

	ft_striteri(str1, (f));
	printf("str1: %s\n", str1);
}
*/
