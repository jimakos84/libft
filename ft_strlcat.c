/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:03:42 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/19 19:33:38 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	l_src;
	size_t	l_dst;

	if ((!dst || !src) && size == 0)
		return (0);
	j = 0;
	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
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
