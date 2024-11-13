/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:40:02 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/13 18:16:00 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
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

char	*ft_itoa(int n)
{
	char	*result;
	int		digits;
	int		nb;

	nb = n;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digits = digit_count(n);
	result = malloc(digits + 1);
	if (result == NULL)
		return (NULL);
	result[digits] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[--digits] = '0' + nb % 10;
		nb = nb / 10;
	}
	return (result);
}
/*
int	main()
{
	printf("%d\n", digit_count(2104182306));
	printf("%s\n", ft_itoa(2104182306));

	return 0;
}
*/
