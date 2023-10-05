/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:51:25 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:21:59 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the passed character is ASCII.
 * @param arg Character to be checked.
 * @return [1] if c is ASCII, [0] otherwise.
 */
int	ft_isascii(int c)
{
	if ((c < 0 || c > 127))
	{
		return (0);
	}
	return (1);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c = '.';
	printf("%i\n", ft_isascii(c));
	printf("%d\n", isascii(c));
}
*/
