/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwatanab <nwatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:33:44 by nwatanab          #+#    #+#             */
/*   Updated: 2020/11/23 12:06:16 by nwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(buf + i) = (unsigned char)ch;
		i++;
	}
	return (buf);
}
