/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:08:56 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/18 13:32:54 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*c;
	
	if (size && (((nmemb * size) / size) != nmemb))
		return (NULL);
	else
	{
		c = malloc(nmemb * size);
		if (!c)
			return (NULL);
		ft_bzero(c, nmemb * size);
		return (c);
	}
}
