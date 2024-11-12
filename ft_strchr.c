/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:22:31 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/12 18:28:43 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' + 1)
	{
		if (c == s[i])
			return ((char *) &s[i]);
		i++;
	}
	return((char *) s);
}
/*
int	main()
{
	printf("%s\n", strchr("pipo pa pipo", 0));
	printf("%s\n", ft_strchr("pipo pa pipo", 0));
	return 0;
}
*/
