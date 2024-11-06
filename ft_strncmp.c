/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:07:40 by dvlachos          #+#    #+#             */
/*   Updated: 2024/10/31 16:51:23 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((char) s1[i] != (char) s2[i])
			return ((char) s1[i] - (char) s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str1[] = "";
	char	str2[] = "";
	
	printf("%d\n", strncmp(str1, str2, 2));
	printf("%d\n", ft_strncmp(str1, str2, 2));
	return 0;
}
*/
