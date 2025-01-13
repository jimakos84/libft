/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prpointer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:32:59 by dvlachos          #+#    #+#             */
/*   Updated: 2025/01/13 11:55:43 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	prpointer(void *poi)
{
	int			i;
	uintptr_t	ptr;

	i = 0;
	ptr = (uintptr_t)poi;
	if (!ptr)
		return (prstr("(nil)"));
	else
	{
		i += prstr("0x");
		i += prhex((uintptr_t)ptr, 'x');
	}
	return (i);
}
