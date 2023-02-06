/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:55:09 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/05 20:47:49 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_size(long int n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 9)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long int	num;
	int			size;
	char		*str;
	int			neg;

	num = n;
	size = check_size(num);
	str = malloc(size + 1);
	str[size] = '\0';
	neg = 0;
	if (num < 0)
	{
		num *= -1;
		neg = 1;
		size--;
	}
	while (size)
	{
		str[size + neg - 1] = 48 + (num % 10);
		num /= 10;
		size--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
