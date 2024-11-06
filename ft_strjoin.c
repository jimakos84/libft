/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:04:59 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 12:12:25 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (join == 0)
		return (0);
	join = ft_strcat((char *)s1, (char *)s2);
	return (join);
}
/*
int	main()
{
	char	str1[20] = "xXx chaos ";
	char	str2[20] = "reigns xXx";

	printf("%s\n", ft_strjoin(str1, str2));
	return 0;
}
*/
