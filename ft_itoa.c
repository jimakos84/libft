/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:40:02 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 18:29:42 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	digit_count(int n)
{
	int	count;
	
	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
*/
char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	i = digit_count(n) - 1;
	result = malloc(digit_count(n) + 1);
	if (!result)
		return (NULL);
	if (n == -2147483648)
		result = "-2147483648";
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		result[i--] = '0' + n % 10;
		n /= 10;
	}
	return (result);
}
/*
int	main()
{
	printf("%d\n", digit_count(-102838));
	printf("%s\n", ft_itoa(-102838));
	return 0;
}
*/
