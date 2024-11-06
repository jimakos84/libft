/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:56:28 by dvlachos          #+#    #+#             */
/*   Updated: 2024/10/31 12:07:12 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = sizeof((char *)s);
	while (s[i])
	{
		if ((char) c == s[i])
			return ((char *) &s[i]);
		i--;
	}
	return (0);
}
/*
int	main()
{
	char	*str = "ululululul";

	printf("%s\n", strchr(str, 'u'));
	printf("%s\n", strrchr(str, 'u'));
	printf("%s\n", ft_strrchr(str, 'u'));
	return 0;
}
*/
