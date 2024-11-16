/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:24:06 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/16 18:42:19 by dvlachos         ###   ########.fr       */
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
/*
int	main()
{
	char	str[] = "it's been 7 hours and 15 days";
	char	*ptr = (char *) memchr(str, 't', 3);
	char	*myptr = (char *) ft_memchr(str, 't', 3);
	printf("%s\n", ptr);
	printf("%s\n", myptr);
	
	return 0;
}
*/
