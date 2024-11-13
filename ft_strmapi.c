/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:34 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/13 18:32:20 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char	f(unsigned int n, char c)
{
	(void) n;
	char	str;
	
	str = c;
	if (c >= 'a' && c <= 'z')
		str -= 32;
	else if (c >= 'A' && c <= 'Z')
		str += 32;
	return (str);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
int	main()
{
	char	str1[] = "HeLlO WoRlD";
	char	*str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
	return 0;
}
*/
