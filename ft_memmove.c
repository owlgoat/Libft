/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwatanab <nwatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 17:09:51 by nwatanab          #+#    #+#             */
/*   Updated: 2020/11/24 01:18:22 by nwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memrcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*(char *)(dst + n - 1) = *(const char *)(src + n - 1);
		n--;
	}
	return (dst);
}

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == src || n == 0)
		return (dst);
	if (dst > src)
		ft_memrcpy(dst, src, n);
	else if (src > dst)
		ft_memcpy(dst, src, n);
	return (dst);
}
