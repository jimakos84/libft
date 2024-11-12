/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:34 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/10 17:09:44 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char	f(unsigned int n, char c)
{
	char	str;
	str = c - 3;
	return (str);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = malloc(ft_strlen(s) + 1);
	if (!str || !s || !f)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main()
{
	char	str1[] = "khoorrrr#zruog";
	char	*str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
	return 0;
}
*/
