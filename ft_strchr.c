/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:22:31 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 12:11:52 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == 0 && c == s[i + 1])
			return ((char *) &s[i + 1]);
		if (c == s[i])
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	*str = "nothing compares 2 U";

	printf("%s\n", strchr(str, 'y'));
	printf("%s\n", ft_strchr(str, 'y'));
	return 0;
}
*/
