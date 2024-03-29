/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:51:14 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:20:08 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Checks if the passed character is alphabetic.
 * @param c Character to be checked.
 * @return [1] if c is alphabetic, [0] otherwise.
 */
int	ft_isalpha(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122))
	{
		return (0);
	}
	return (1);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c = '-';
	printf("%i\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
}
*/
