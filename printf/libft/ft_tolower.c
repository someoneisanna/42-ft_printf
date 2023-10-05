/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:03:10 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:12:37 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts the letter c to lower case, if possible.
 * @param c The character to be converted.
 * @return The lowercase equivalent of the character, if possible.
 */
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

/*
#include <stdio.h>

int main(void)
{
	char a = 'A';
	char b = 'l';
	char c = '2';
	char d = 'Z';

	printf("%c\n", ft_tolower(a));
	printf("%c\n", ft_tolower(b));
	printf("%c\n", ft_tolower(c));
	printf("%c\n", ft_tolower(d));
}
*/
