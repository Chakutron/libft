/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:55:22 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/06 17:56:26 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	if ((!dest || !src) && !size)
		return (0);
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (size == 0)
		return (s);
	i = 0;
	while (src[i] && (d + i) < size - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	if (size < d)
		return (s + size);
	dest[d + i] = '\0';
	return (s + d);
}
