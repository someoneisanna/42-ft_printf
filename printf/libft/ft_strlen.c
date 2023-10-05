/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:00:54 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 20:01:47 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Computes the length of the string s.
 * @param s String to be scanned.
 * @return The length of the string s.
 */
size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*
#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str);

int main(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz2";
	printf("%li\n", ft_strlen(str));
}
*/
