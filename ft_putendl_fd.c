/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:23:56 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 12:29:02 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, &*s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
int	main()
{
	ft_putendl_fd("when you die", 1);
	return 0;
}
*/
