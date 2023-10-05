/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:51:50 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:24:30 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks for any printable character including space.
 * @param c The character to be checked.
 * @return [1] if the character tests true, [0] otherwise.
 */
int	ft_isprint(int c)
{
	if ((c < 32 || c > 126))
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
	char c = '4';
	printf("%i\n", ft_isprint(c));
	printf("%d\n", isprint(c));
}
*/
