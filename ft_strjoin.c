/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:04:59 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/16 17:36:52 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;

	if (!s1)
		return (NULL);
	join = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		join[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	join[ft_strlen(s1) + i] = '\0';
	return (join);
}
/*
int	main()
{
	char	*str1 = "xXx chaos ";
	char	*str2 = "reigns xXx";

	printf("%zu\n", ft_strlen(str1));
	printf("%s\n", ft_strjoin(str1, str2));
	return 0;
}
*/
