/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 03:54:40 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/21 01:05:03 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_numbers(int n)
{
	int		numbers;

	numbers = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		numbers++;
	while (n)
	{
		n = n / 10;
		numbers++;
	}
	return (numbers);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		numbers;
	int		tmp;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	numbers = count_numbers(n);
	s = (char *)malloc((numbers + 1) * sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n *= -1;
	}
	s[numbers] = '\0';
	while (n)
	{
		tmp = n % 10;
		n = (n - tmp) / 10;
		s[--numbers] = tmp + '0';
	}
	return (s);
}
