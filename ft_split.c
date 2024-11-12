/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:44:51 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/10 15:16:18 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(const char *str, char c)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
			count++;
		while (*str != c && *str)
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	len;
	int		i;

	array = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (*s)
	{	
		while (*s == c && *s)
			s++;
		if (*s)
		{	
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			array[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	array[i] = NULL;
	return (array);
}
/*
int	main()
{
	char	c = '.';
	char	*str = "..ena.dyo.tria.tessera.pente";
	char	**array;
	int	i;

	array = ft_split(str, c);
	i = 0;
	while (i < wordcount(str, c))
		printf("%s\n", array[i++]);
	return 0;
}
*/
