/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:50:01 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/06 14:46:02 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		i;
	int		j;

	j = ft_strlen((char *)s1) - 1;
	i = 0;
	while (ft_strchr(set, s1[i]) && i <= j)
		i++;
	if (i > j)
		return (ft_strdup((char *)s1 + j + 1));
	while (ft_strchr(set, s1[j]) && j >= 0)
		j--;
	trim = malloc(j - i + 2);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[i], j - i + 1);
	return (trim);
}

int	main()
{
	char	str[30] = "iiiiiiiiiiiiiii";

	printf("%s\n", ft_strtrim(str, "i"));
	return 0;
}
