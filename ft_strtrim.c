/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:50:01 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/14 12:34:11 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		start;
	int		end;
	int		i;

	end = ft_strlen(s1) - 1;
	start = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end]))
		end--;
	trim = malloc(end - start + 2);
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}
/*
int	main()
{
	char	str[] = "lorem ipsum dolor sit amet";

	printf("%s\n", ft_strtrim(str, "met"));
	return 0;
}
*/
