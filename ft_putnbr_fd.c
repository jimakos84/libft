/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:30:12 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 12:42:27 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s;
	int		sign;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		sign = -sign;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	s = '0' + n % 10;
	write(fd, &s, 1);
}
/*
int	main()
{
	ft_putnbr_fd(214748364, 1);
	return 0;
}
*/
