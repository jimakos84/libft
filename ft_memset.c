/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:54:00 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/10 18:03:24 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;

	p = (char *)str;
	while (n--)
		*p++ = c;
	return (str);
}
/*
int	main()
{
	char	str[] = "lalalalalalal";
	
	printf("%s\n", str);
	memset(str, '6', 5);
	printf("%s\n", str);
	ft_memset(str, '6', 5);
	printf("%s\n", str);
	return 0;

}
*/
