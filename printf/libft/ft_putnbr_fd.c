/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:58:08 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:44:53 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 * @return Nothing.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	nbr;

	nb = n;
	if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
		ft_putnbr_fd(nb, fd);
	}
	else if (nb >= 10)
	{
		ft_putnbr_fd((nb / 10), fd);
		ft_putnbr_fd((nb % 10), fd);
	}
	else
	{
		nbr = nb + '0';
		ft_putchar_fd(nbr, fd);
	}
}

/*
#include <unistd.h>

void ft_putnbr_fd(int n, int fd);

int	main(void)
{
	int a = 2147483647;
	int b = -10;
	int c = 10;
	int d = -2147483648;
	ft_putnbr_fd(a, 1);
	ft_putnbr_fd(b, 1);
	ft_putnbr_fd(c, 1);
	ft_putnbr_fd(d, 1);
}
*/
