/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:16:15 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 14:33:01 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	sub = malloc(len);
	if (sub == NULL)
		return (NULL);
	while (len--)
		sub[i++] = s[start++];
	return (sub);
}
/*
int	main()
{
	char	*str = "november rain";

	printf("%s\n", ft_substr(str, 0, 4));
	return 0;
}
*/
