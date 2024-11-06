/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:38:54 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/04 12:13:17 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*c;

	c = (char *)s;
	while (n--)
		*c++ = 0;
}
/*
int	main()
{
	char	str[10] = "testestest";

	printf("%s\n", str);
	ft_bzero(str, 4);
	printf("%s\n", str);
	bzero(str, 4);
	printf("%s\n", str);
	return 0;
}
*/
