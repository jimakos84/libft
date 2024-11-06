/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:24:06 by dvlachos          #+#    #+#             */
/*   Updated: 2024/10/31 16:24:59 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	int				i;

	str = (unsigned char *) s;
	i = 0;
	while (str[i] && n > i)
	{
		if ((unsigned char) c == str[i])
			return ((unsigned char *) &s[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "it's been 7 hours and 15 days";
	char	*ptr = (char *) memchr(str, 'o', sizeof(str));
	char	*myptr = (char *) ft_memchr(str, 'o', sizeof(str));
	printf("%s\n", ptr);
	printf("%s\n", myptr);
	
	return 0;
}
*/
