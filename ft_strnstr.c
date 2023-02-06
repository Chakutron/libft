/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:00:58 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/06 18:35:46 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if ((!big || !little) && !len)
		return (0);
	if (!ft_strlen(little))
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && (i + j) < len)
			{
				if (big[i + j] != little[j])
					break ;
				else if (j == (ft_strlen(little) - 1))
					return ((char *)big + i);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
