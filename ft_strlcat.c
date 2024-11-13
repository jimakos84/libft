/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:03:42 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/13 18:54:03 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	m;

	j = 0;
	m = ft_strlen(src);
	i = ft_strlen(dst);
	if (size <= i)
		return (size + m);
	while (src[j] && (i + j < size - 1))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + m);
}
/*
int	main()
{
	char	str1[20] = "remember ";
	char	str2[3] = "me";

	//strlcat(str1, str2, sizeof(str1));
	//printf("strlcat: %s\n", str1);
	//ft_strlcat(str1, str2, sizeof(str1));
	//printf("ft_strlcat: %s\n", str1);
	printf("ft_strlcat: %zu\n", ft_strlcat(str1, str2, 20));
//	printf("strlcat: %zu\n", strlcat(str1, str2, 20));
	return 0;
}
*/
