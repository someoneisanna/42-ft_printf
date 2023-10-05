/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:50:21 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 18:59:39 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v' || c == ' ')
	{
		return (1);
	}
	return (0);
}

/// @brief Converts a string to an integer.
/// @param s The string to be converted.
/// @return The integer converted from the string.
int	ft_atoi(const char *s)
{
	int	i;
	int	res;
	int	sig;

	i = 0;
	res = 0;
	sig = 1;
	while (ft_isspace(s[i]) == 1)
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sig = -1;
		}
		i++;
	}
	while (ft_isdigit(s[i]))
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (sig * res);
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char str[] = "        -123478ab567";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}
*/
