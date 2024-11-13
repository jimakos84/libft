/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:02:11 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/13 19:01:03 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && size > 1)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main()
{
	char	str[50] = "another day in paradise";
	char	dest[10];

	ft_strlcpy(dest, str, sizeof(dest));
	printf("%s\n", dest);
	strlcpy(dest, str, sizeof(dest));
	printf("%s\n", dest);
	printf("%zu\n", strlcpy(dest, str, sizeof(str)));
	printf("%zu\n", ft_strlcpy(dest, str, sizeof(str)));
	return 0;
}
*/
