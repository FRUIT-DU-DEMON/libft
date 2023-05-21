/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 07:16:32 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/23 13:56:03 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*to_fill;

	i = 0;
	len = ft_strlen(s1);
	to_fill = malloc((len + 1) * sizeof(char));
	if (!to_fill)
		return (NULL);
	while (s1[i])
	{
		to_fill[i] = s1[i];
		i++;
	}
	to_fill[i] = '\0';
	return (to_fill);
}
