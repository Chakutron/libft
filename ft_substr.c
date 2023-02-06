/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:17:41 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/03 12:42:18 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	l;
	size_t	size;

	l = ft_strlen(s);
	if (start > (l + 1))
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	size = l - start;
	if (len > size)
		str = malloc(size + 1);
	else
		str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
