/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:43:43 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 12:04:26 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dest;
	while (n--)
		*d++ = *s++;
	return (d);
}
/*
int	main()
{
	const char	str[20]= "enadyotriaooo";
	char	str1[20];

	memcpy(str1, str, sizeof(str));
	printf("%s\n", str1);
	ft_memcpy(str1, str, sizeof(str));
	printf("%s", str1);
	return 0;
}
*/
