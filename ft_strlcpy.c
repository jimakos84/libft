/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:02:11 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/14 12:45:12 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(src);
	if (i + 1 < size)
		ft_memcpy(dst, src, i + 1);
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (i);
}
/*
int	main()
{
	char	str[] = "another day in paradise";
	char	dest[24];

	ft_strlcpy(dest, str, sizeof(dest));
	printf("%s\n", dest);
	strlcpy(dest, str, sizeof(dest));
	printf("%s\n", dest);
	printf("%zu\n", strlcpy(dest, str, sizeof(str)));
	printf("%zu\n", ft_strlcpy(dest, str, sizeof(str)));
	return 0;
}
*/
