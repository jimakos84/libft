/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:05:35 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/07 17:59:06 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = ft_strlen(src);
	dup = (char *)malloc(i * sizeof(char) + 1);
	while (*src)
		*dup++ = *src++;
	*dup = 0;
	return (dup - i);
}
/*
int	main()
{
	printf("%s", ft_strdup("nefeli"));
	return 0;
}
*/
