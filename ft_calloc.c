/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 10:28:17 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/03 15:34:54 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	len;

	if (nmemb == 0 || size == 0)
		return (NULL);
	len = nmemb * size;
	if ((len / size) != nmemb)
		return (NULL);
	tab = malloc(len);
	if (!tab)
		return (NULL);
	ft_bzero(tab, len);
	return (tab);
}
