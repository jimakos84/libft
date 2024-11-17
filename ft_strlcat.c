/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:03:42 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/17 13:36:28 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	l_src;
	size_t	l_dst;

	j = 0;
	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	if (dst == NULL || src == NULL)
		return (0);
	if (size <= l_dst)
		return (l_src + size);
	while (src[j] && (l_dst + j < size - 1))
	{
		dst[l_dst + j] = src[j];
		j++;
	}
	if ((l_dst + j) < size)
		dst[l_dst + j] = '\0';
	return (l_dst + l_src);
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
