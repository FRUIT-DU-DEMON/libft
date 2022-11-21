/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:17:03 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/20 21:16:41 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l_src;
	size_t	l_dst;

	if (!dst && dstsize == 0)
		return (0);
	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	i = 0;
	if (l_dst > dstsize)
		return (dstsize + l_src);
	dstsize -= l_dst;
	if (dstsize)
	{
		while (src[i] && dstsize - 1 > 0)
		{
			dst [l_dst + i] = src [i];
			i++;
			dstsize--;
		}
		dst[l_dst + i] = '\0';
	}
	return (l_dst + l_src);
}
