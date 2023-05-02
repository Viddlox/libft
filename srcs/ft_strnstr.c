/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 19:03:14 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/25 18:21:07 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] && i + j < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[100] = "Big Chungus";
	char	to_find[100] = "Chungus";
	char	str1[100] = "Big Chungus";
	char	to_find1[100] = "Chungus";
	printf("%s \n", str);
	printf("%s \n", to_find);
	printf("Result 1: %s \n", strnstr(str, to_find, 20));
	printf("Result 2: %s \n", ft_strnstr(str1, to_find1, 20));
}
*/