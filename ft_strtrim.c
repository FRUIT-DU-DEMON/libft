/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:38:40 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/20 21:39:21 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	first_check(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
		{
			j++;
			if (set[j] == '\0' && s1[i] != set[j])
				return (i);
		}
		i++;
	}
	return (i);
}

static size_t	last_check(char const *s1, char const *set)
{
	size_t	len;
	size_t	j;

	len = ft_strlen(s1) - 1;
	while (s1[len] && len >= 0)
	{
		j = 0;
		while (set[j] && s1[len] != set[j])
		{
			j++;
			if (set[j] == '\0' && s1[len] != set[j])
				return (len);
		}
		len--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strim;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	j = 0;
	if (set[j] == '\0')
		return (ft_strdup(s1));
	i = first_check(s1, set);
	len = last_check(s1, set);
	if (i > len)
		return (ft_strdup(""));
	strim = (char *)malloc((len - i + 2) * sizeof(char));
	if (!strim)
		return (NULL);
	while (s1[i] && i <= len)
	{
		strim[j] = s1[i];
		i++;
		j++;
	}
	strim[j] = '\0';
	return (strim);
}
