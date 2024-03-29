/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataboada <ataboada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:57:35 by ataboada          #+#    #+#             */
/*   Updated: 2023/10/05 19:43:38 by ataboada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * @param c The character to output.
 * @param fd The file descriptor on which to write.
 * @return Nothing.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <unistd.h>

int main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
}
*/
