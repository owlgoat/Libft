/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwatanab <nwatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 20:42:07 by nwatanab          #+#    #+#             */
/*   Updated: 2020/11/23 15:34:53 by nwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_setchar(char const c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	size_t	start;
	size_t	end;
	char	*p;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (is_setchar(s1[start], set))
		start++;
	while (is_setchar(s1[end - 1], set) && start < end)
		end--;
	p = malloc(sizeof(char) * (end - start + 1));
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1 + start, end - start + 1);
	return (p);
}
