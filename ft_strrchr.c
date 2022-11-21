/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:19:16 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/20 21:32:15 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;
	char	*t;

	i = ft_strlen(s);
	t = (char *)s;
	cc = (char)c;
	while (i >= 0 && t[i] != cc)
		i--;
	if (t[i] == cc)
		return (t + i);
	return (NULL);
}
