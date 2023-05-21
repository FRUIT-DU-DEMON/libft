/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:17:03 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/23 16:07:47 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l_src;
	size_t	l_dst;

	l_src = ft_strlen(src);
	if (dstsize == 0)
		return (l_src);
	l_dst = ft_strlen(dst);
	i = 0;
	if (l_dst > dstsize)
		return (dstsize + l_src);
	while (src[i] && (i + l_dst < dstsize - 1))
	{
		dst [l_dst + i] = src [i];
		i++;
	}
	dst[l_dst + i] = '\0';
	return (l_dst + l_src);
}
