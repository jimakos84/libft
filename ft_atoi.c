/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:15:51 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/14 15:30:31 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{	
	long	result;
	int		sign;
	int		i;

	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	result = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (result < 0 && sign == 1)
			return ((int)LONG_MAX);
		if (result < 0 && sign == -1)
			return ((int)LONG_MIN);
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main()
{
	char	*str = "9999999999999999999";

	printf("%d\n", atoi(str));
	printf("%d\n", ft_atoi(str));
	return 0;
}
*/
