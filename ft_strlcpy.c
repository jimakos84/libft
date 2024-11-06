/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:02:11 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/04 16:49:52 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}
/*
int	main()
{
	char	str[50] = "another day in paradise";
	char	dest[50];

	ft_strlcpy(dest, str, sizeof(dest));
	printf("%s\n", dest);
	strlcpy(dest, str, sizeof(dest));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest, str, sizeof(dest)));
	printf("%zu\n", ft_strlcpy(dest, str, sizeof(dest)));
	return 0;
}
*/
