/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:44:51 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/18 13:33:56 by dvlachos         ###   ########.fr       */
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

static void	free_array(char	**array, int len)
{
	while (len--)
	{
		free(*array);
		*array = NULL;
		*array--;
	}
}


static void	_split(char **array, char const *s, char c)
{
	size_t	len;
	int		i;

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
			array[i] = ft_substr(s, 0, len);
			if (!array[i])
			{
				free_array(array, i);
				return ;
			}
			s += len;
			i++;
		}
	}
	array[i] = NULL;
}


char	**ft_split(char const *s, char c)
{
	char	**array;

	array = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!array || !s)
		return (NULL);
	_split(array, s, c);
	if (*array == NULL)
	{
		free(array);
		array = NULL;
	}
	return (array);
}
