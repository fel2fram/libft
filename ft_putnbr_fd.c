/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-fram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 18:33:50 by fde-fram          #+#    #+#             */
/*   Updated: 2019/08/01 18:39:54 by fde-fram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int k, int fd)
{
	char c;

	if (k == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (k < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd(-k, fd);
	}
	else if (k <= 9)
	{
		c = k + '0';
		write(fd, &c, 1);
	}
	else
	{
		ft_putnbr_fd(k / 10, fd);
		ft_putnbr_fd(k % 10, fd);
	}
}
