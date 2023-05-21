/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:18:18 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/23 17:08:50 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			words++;
		}
	}
	return (words);
}

static int	len_of_word(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*free_memory(char **output, int words)
{
	while (words)
	{
		free(output[words -1]);
		words--;
	}
	free(output);
	return (NULL);
}

static char	**allocation(char const *s, char c)
{
	char	**output;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	output = (char **)malloc((words + 1) * sizeof(char *));
	if (!output)
		return (NULL);
	output[words] = NULL;
	return (output);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	output = allocation(s, c);
	if (!output)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			len = len_of_word((s + i), c);
			output[j] = (char *)malloc((len + 1) * sizeof(char));
			if (!output[j])
				return (free_memory(output, count_words(s, c)));
			ft_strlcpy(output[j++], (s + i), len + 1);
			i = i + len;
		}
	}
	return (output);
}
