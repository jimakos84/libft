/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:03:42 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/04 14:13:40 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j])
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (i + j);
}
/*
int	main()
{
	char	str1[] = "remember ";
	char	str2[] = "me";

	ft_strlcat(str1, str2, sizeof(str1));
	printf("%s\n", str1);
	strlcat(str1, str2, sizeof(str1));
	printf("%s\n", str1);
	printf("%zu\n", ft_strlcat(str1, str2, 2));
	printf("%zu\n", strlcat(str1, str2, 2));
	return 0;
}
*/
