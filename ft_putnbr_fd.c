/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwatanab <nwatanab@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 00:06:03 by nwatanab          #+#    #+#             */
/*   Updated: 2020/11/23 23:57:08 by nwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	nb;

	num = n;
	if (num < 0)
	{
		num *= -1;
		write(fd, "-", 1);
	}
	if (num >= 0 && num <= 9)
	{
		nb = num + '0';
		write(fd, &nb, 1);
		return ;
	}
	nb = (num % 10) + '0';
	ft_putnbr_fd(num / 10, fd);
	write(fd, &nb, 1);
}
