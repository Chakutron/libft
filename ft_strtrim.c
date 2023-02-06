/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:19:33 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/03 15:35:19 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
			j++;
		i++;
	}
	str = malloc(j + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == NULL)
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
