/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:54:00 by dvlachos          #+#    #+#             */
/*   Updated: 2024/10/31 12:41:37 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)str;
	i = 0;
	while (n--)
	{
		*p = c;
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str[] = "lalalalalalal";
	
	printf("%s\n", str);
	memset(str, '%', 5);
	printf("%s\n", str);
	ft_memset(str, '%', 5);
	printf("%s", str);
	return 0;

}
*/
