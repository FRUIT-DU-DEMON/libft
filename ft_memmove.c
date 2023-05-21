/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:17:08 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/23 17:33:26 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*srcc;
	char	*dstt;

	if (src >= dst || (!src && !dst))
		return (ft_memcpy(dst, src, len));
	i = len;
	srcc = (char *)src;
	dstt = (char *)dst;
	while (i > 0)
	{
		i--;
		dstt[i] = srcc[i];
	}
	return (dstt);
}
