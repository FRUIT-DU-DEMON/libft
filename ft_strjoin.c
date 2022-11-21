/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:55:15 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/20 20:52:33 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1_s2;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	s1_s2 = (char *)malloc((len + 1) * sizeof(char));
	if (!s1_s2)
		return (NULL);
	while (s1[i] && i < len)
	{
		s1_s2[i] = s1[i];
		i++;
	}
	j = i;
	i = 0;
	while (s2[i] && i < (len - ft_strlen(s1)))
		s1_s2[j++] = s2[i++];
	s1_s2[j] = '\0';
	return (s1_s2);
}
