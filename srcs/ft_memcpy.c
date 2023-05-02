/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 00:21:05 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/25 18:20:48 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*src_temp;
	char	*dest_temp;

	i = -1;
	src_temp = (char *)src;
	dest_temp = (char *)dst;
	if (!dst && !src)
		return (0);
	while (++i < n)
		dest_temp[i] = src_temp[i];
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";
	char	dest[12];
	char	str1[] = "Hello World";
	char	dest1[12];
	memcpy(dest, str, 6);
	dest[11] = '\0';
	printf("%s\n", dest);
	ft_memcpy(dest1, str1, 6);
	printf("%s\n", dest1);
	return (0);
}
*/
#include <string.h>
#include <stdio.h>

int main(void)
{
    // Test case 1: Passing NULL as the src pointer
    char *src1 = NULL;
    char dst1[10] = "abcdefghi";
    ft_memcpy(dst1, src1, 5);
    printf("Test case 1: %s\n", dst1);
    
    // Test case 2: Passing overlapping src and dst pointers with different offsets
    char src2[] = "1234567890";
    char dst2[] = "abcdefghi";
    ft_memcpy(dst2+3, src2+2, 5);
    printf("Test case 2: %s\n", dst2);
    
    // Test case 3: Passing non-overlapping src and dst pointers
    char src3[] = "1234567890";
    char dst3[11];
    ft_memcpy(dst3, src3, 10);
    printf("Test case 3: %s\n", dst3);
    
    // Test case 4: Passing a length of 0
    char src4[] = "1234567890";
    char dst4[11];
    ft_memcpy(dst4, src4, 0);
    printf("Test case 4: %s\n", dst4);
    
    // Test case 5: Passing a length greater than the size of the source data
    char src5[] = "1234567890";
    char dst5[11];
    ft_memcpy(dst5, src5, 15);
    printf("Test case 5: %s\n", dst5);
	
    // Test case 6: Passing NULL as the src pointer and dst pointer
    char *src6 = NULL;
    char *dst6 = NULL;
    ft_memcpy(dst6, src6, 5);
    printf("Test case 1: %s\n", dst6);

    return (0);
}

