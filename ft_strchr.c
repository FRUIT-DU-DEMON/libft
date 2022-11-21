/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:47:46 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/21 01:12:24 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*t;

	t = (char *)s;
	i = 0;
	cc = (char)c;
	while (t[i] && t[i] != cc)
		i++;
	if (t[i] != cc)
		return (NULL);
	return (t + i);
}
