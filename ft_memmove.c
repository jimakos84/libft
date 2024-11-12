/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:13:28 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/10 18:06:22 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest <= src)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else if (dest > src)
	{
		d += n - 1;
		s += n - 1;
		while (n--)
		{
			*d-- = *s--;
		}
	}
	if (!dest && !src)
		return (0);
	return (dest);
}
/*
int	main()
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	arrdest[] = {6, 7, 8, 9, 0};
	char	str[50] = "tonight the music sings sings";
	char	*dest;
	
	dest = str;

	printf("%s\n", str);
	memmove(dest + 2, str, 10);
	printf("%s\n", dest);
	ft_memmove(dest + 2, str, 10);
	printf("%s\n", dest);
	printf("%d\n", arr[0]);
//	ft_memmove(arrdest, arr, sizeof(arr));
//	memmove(arrdest, arr, sizeof(arr));
	printf("%d\n", arrdest[3]);
	return 0;
}
*/
