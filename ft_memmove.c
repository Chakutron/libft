/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:29:43 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/04 14:59:46 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp_dest;
	const char	*temp_src;

	temp_dest = dest;
	temp_src = src;
	if (dest > src)
	{
		while (n > 0)
		{
			temp_dest[n - 1] = temp_src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
