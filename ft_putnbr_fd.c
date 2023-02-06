/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:44:02 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/06 12:01:09 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_int(int n, int fd)
{
	char	c;

	c = n + 48;
	write(fd, &c, 1);
}

static void	ft_putnbr2(long int nb, int fd)
{
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr2(nb / 10, fd);
		write_int(nb % 10, fd);
	}
	else
		write_int(nb, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = n;
	ft_putnbr2(nb, fd);
}
