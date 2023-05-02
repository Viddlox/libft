/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 03:39:07 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/25 18:20:43 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1[i] && str1[i] == str2[i] && i < n)
		i++;
	return (str1[i] - str2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "";
	char	s2[] = "";
	char	s3[] = "";
	char	s4[] = "";

	printf("%s \n", s1);
	printf("%s \n", s2);
	printf("Result 1: %d \n", memcmp(s1, s2, 3));
	printf("Result 2: %d \n", ft_memcmp(s3, s4, 3));
	return (0);
}
*/