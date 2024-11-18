/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:15 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/18 13:36:56 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) || len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	while (len-- && *s)
		sub[i++] = s[start++];
	sub[i] = 0;
	return (sub);
}
