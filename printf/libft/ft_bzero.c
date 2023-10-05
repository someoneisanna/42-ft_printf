/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:50:32 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 18:47:53 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Writes n zeroed bytes to the string s. If n is zero, nothing happens.
 * @param s The pointer to the string to be zeroed.
 * @param n The number of bytes to be zeroed.
 * @return Nothing.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
#include <strings.h>

int main(void)
{
	char str[] = "Anna Carolina";
	char *str1 = str;

	bzero(str, 5 * sizeof(char));
	printf("After real function: %s\n", str);

	ft_bzero(str1, 5 * sizeof(char));
	printf("After my function:   %s\n", str1);
}
*/
