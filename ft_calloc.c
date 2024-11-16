/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvlachos <dvlachos@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:08:56 by dvlachos          #+#    #+#             */
/*   Updated: 2024/11/16 18:53:31 by dvlachos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*c;

	if (SIZE_MAX / nmemb < size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	else
	{
		c = malloc(nmemb * size);
		if (!c)
			return (NULL);
		ft_bzero(c, nmemb * size);
		return (c);
	}
}
/*
int	main()
{
	int	n;
	int	*array;
	int	i;

	i = 0;
	n = 5;
	array = (int*)ft_calloc(n, sizeof(int));

	if (array == NULL) 
	{
		fprintf(stderr, "Memory allocation failed!\n");
		return 1;
	}
	printf("Array elements after calloc: ");
	while (i < n)
	{
		printf("%d", array[i]);
		i++;
	}
	printf("\n");

	free(array);
	return 0;
}
*/
