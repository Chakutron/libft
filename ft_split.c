/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchiboub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:04:07 by mchiboub          #+#    #+#             */
/*   Updated: 2023/02/06 19:10:08 by mchiboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	letters;
	int	i;

	words = 0;
	letters = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c && letters)
		{
			words++;
			letters = 0;
		}
		if (s[i] != c)
			letters = 1;
		i++;
	}
	if (letters)
		words++;
	return (words);
}

static void	strncpy2(char *dst, char const *src, int start, int end)
{
	int	i;

	i = 0;
	while ((start + i) < end)
	{
		dst[i] = src[start + i];
		i++;
	}
	dst[i] = '\0';
}

static char	*next_word(char const *s, char c, int *index)
{
	char	*word;
	int		i;
	int		start;
	int		end;

	i = *index;
	start = -42;
	while (s[i])
	{
		if (s[i] != c)
		{
			if (start == -42)
				start = i;
		}
		if (s[i] == c && start != -42)
			break ;
		i++;
	}
	end = i;
	word = malloc(((end - start) + 1));
	strncpy2(word, s, start, end);
	*index = end;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		words;
	int		index;
	int		i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	index = 0;
	while (i < words)
	{
		split[i] = next_word(s, c, &index);
		i++;
	}
	split[i] = NULL;
	return (split);
}
