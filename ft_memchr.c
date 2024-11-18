/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:24:06 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/18 13:31:04 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i;

	if (!s && !n)
		return (NULL);
	ch = (unsigned char ) c;
	str = (unsigned char *) s;
	i = 0;
	while (n > i)
	{
		if (ch == str[i])
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
