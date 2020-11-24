/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwatanab <nwatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:32:49 by nwatanab          #+#    #+#             */
/*   Updated: 2020/11/20 10:48:17 by nwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t	i;
	char	*b;

	b = (char *)buf;
	i = 0;
	while (i < n)
	{
		if (b[i] == ch)
			return (&b[i]);
		i++;
	}
	return (0);
}
