/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:52:01 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:24:46 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the
 * integer received as an argument. Negative numbers must be handled.
 * @param n The integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*str;

	nb = n;
	len = ft_nlen(n);
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	else if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void)
{
	char *a, *b, *c, *d, *e, *f;
	printf("%s\n", a = ft_itoa(0));
	printf("%s\n", b = ft_itoa(INT_MAX));
	printf("%s\n", c = ft_itoa(INT_MIN));
	printf("%s\n", d = ft_itoa(10));
	printf("%s\n", e = ft_itoa(987654321));
	printf("%s\n", f = ft_itoa(-10));
	free(a);
	free(b);
	free(c);
	free(d);
	free(e);
	free(f);
}
*/
