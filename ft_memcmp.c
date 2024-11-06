/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:28:59 by dvlachos          #+#    #+#             */
/*   Updated: 2024/10/31 16:52:55 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	char		*st1;
	char		*st2;

	st1 = (char *) s1;
	st2 = (char *) s2;
	i = 0;
	while (n > i)
	{
		if ((char) st1[i] != (char) st2[i])
			return ((char) st1[i] - (char) st2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str1[] = "moderat";
	char	str2[] = "moderai";

	printf("%d\n", memcmp(str1, str2, 10));
	printf("%d\n", ft_memcmp(str1, str2, 10));
	return 0;
}
*/
