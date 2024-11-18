/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:56:28 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/18 13:32:22 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s[i] == (char) c)
		return ((char *) &s[i]);
	while (i > 0)
	{
		if (s[i - 1] == (char) c)
		{
			return ((char *) &s[i - 1]);
		}
		i--;
	}
	return (NULL);
}
