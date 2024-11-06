/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:44:51 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 16:12:13 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**array;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{	
		if (s[i] == c)
		{
			j++;
			i++;
		}
		i++;
	}
	array = (char **)calloc((ft_strlen(s) - j), sizeof(char));
	
}
