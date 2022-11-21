/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlabouit <hlabouit@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 05:19:44 by hlabouit          #+#    #+#             */
/*   Updated: 2022/11/19 02:09:37 by hlabouit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*string;
	int		i;
	int		len_s;

	if (!s || !f)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	string = malloc((len_s + 1) * sizeof(char));
	if (!string)
		return (NULL);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}

// string[i] = f(i, s[i]); we store what 'f' returns into string
// char	test(unsigned int i, char c)
// {
// 	i = 0;
// 	c -= 32;
// 	return c;
// }
// int main()
// {
// 	char s[] = "mouad";
// 	printf("%s\n", ft_strmapi(s, test));
// }