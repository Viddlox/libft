/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:52:59 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/25 17:24:01 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*str;

	i = -1;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	while (++i < count * size)
		str[i] = 0;
	return (str);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str1;

	str = (char *)calloc(10, sizeof(char));
	if (strcmp(str, "") == 0)
		printf("calloc: str has been zeroed out.\n");
	else
		printf("calloc: str has not been zeroed out.\n");
	free(str);

	str1 = (char *)ft_calloc(10, sizeof(char));
	if (strcmp(str1, "") == 0)
		printf("ft_calloc: has been zeroed out.\n");
	else
		printf("ft_calloc: has not been zeroed out.\n");
	free(str1);

	return (0);
}
*/