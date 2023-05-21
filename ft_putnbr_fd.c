/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:35:25 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/21 03:32:06 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		i;
	char	str[10];

	if (n == 0)
		write(fd, "0", 1);
	i = 0;
	nb = n;
	if (nb < 0)
	{
		nb = nb * (-1);
		write(fd, "-", 1);
	}
	while (nb)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i > -1)
	{
		write(fd, &str[i], 1);
		i--;
	}
}
