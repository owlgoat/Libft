/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwatanab <nwatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:28:25 by nwatanab          #+#    #+#             */
/*   Updated: 2020/11/23 18:40:23 by nwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(char const *s, char c)
{
	int		i;
	int		words;

	if (s == NULL)
		return (0);
	i = 0;
	words = 0;
	while (s[i])
	{
		if (words == 0 && s[i] != c)
			words++;
		else if (s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

int		word_len(char const *s, char c)
{
	int		len;

	len = 0;
	while (*s == c)
		s++;
	while (*s != c && *s)
	{
		s++;
		len++;
	}
	return (len);
}

char	**free_all(char **str, int i)
{
	while (i > 0)
		free(str[--i]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words_count;
	char	**str;

	words_count = count_words(s, c);
	if (!s || !(str = malloc(sizeof(char *) * (words_count + 1))))
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		str[i] = malloc(sizeof(char) * (word_len(s, c) + 1));
		if (str[i] == NULL)
			return (free_all(str, i));
		while (*s == c)
			s++;
		j = 0;
		while (*s != c && *s)
			str[i][j++] = *s++;
		str[i][j] = '\0';
		i++;
	}
	str[i] = NULL;
	return (str);
}
