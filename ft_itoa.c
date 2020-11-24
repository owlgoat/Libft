/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwatanab <nwatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 01:45:55 by nwatanab          #+#    #+#             */
/*   Updated: 2020/11/24 01:13:35 by nwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_putnbr(char *p, int n, int len)
{
	long	num;

	num = n;
	p[--len] = '\0';
	if (num == 0)
		p[0] = 0 + '0';
	if (num < 0)
	{
		num *= -1;
		p[0] = '-';
	}
	while (num > 0)
	{
		p[--len] = num % 10 + '0';
		num /= 10;
	}
	return (p);
}

int		ft_len(int n)
{
	int		len;
	long	num;

	num = n;
	len = 0;
	if (n == 0)
		return (2);
	if (num < 0)
	{
		num *= -1;
		len++;
	}
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;

	len = ft_len(n);
	p = ft_calloc(len, sizeof(char));
	if (p == NULL)
		return (NULL);
	return (ft_putnbr(p, n, len));
}
