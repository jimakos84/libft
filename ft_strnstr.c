/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:03:38 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/01 17:13:13 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[j])
		return ((char *) big);
	while (len--)
	{
		while (little[j] == big[i])
		{
			j++;
			i++;
		}
		if (!little[j])
		{
			return ((char *) &big[i - j]);
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
int	main()
{
	const char	*bigString = "ela re paidako paidaki mou ti kaneis";
	const char	*littleString = "aki";
	
	printf("%s\n", ft_strnstr(bigString, littleString, 30));
	printf("%s\n", strnstr(bigString, littleString, 30));
	return 0;
}
*/
