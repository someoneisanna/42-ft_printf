/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:59:21 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:52:21 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates sufficient memory for a copy of the string s1, does the copy,
 * and returns a pointer to it. A NULL pointer is placed in the end of the copied
 * string.
 * @param s String to be copied.
 * @return Pointer to the copy of s.
 */
char	*ft_strdup(const char *s)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dup)
	{
		return (NULL);
	}
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	char src[] = "Hey there mate, how you doin'?";
	char *dup = ft_strdup(src);
	printf("%s\n", dup);
	free(dup);
}
*/
