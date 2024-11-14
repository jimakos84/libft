/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:03:38 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/14 12:45:39 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (i < len && big[i])
	{
		while (big[i + j] == little[j] && big [i + j] && i + j < len)
			j++;
		if (little[j] == '\0')
		{
			return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main()
{
	const char	*bigString = "ela re paidako paidaki mou ti kaneis";
	const char	*littleString = "aki";
	
	printf("%s\n", ft_strnstr(bigString, littleString, 20));
	printf("%s\n", strnstr(bigString, littleString, 20));
	return 0;
}
*/
