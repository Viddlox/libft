/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 01:00:18 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/25 18:20:50 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	len_temp;
	char	*dest_temp;
	char	*src_temp;

	dest_temp = (char *)dst;
	src_temp = (char *)src;
	if (!dst && !src)
		return (0);
	else if (!src || !dst)
		return (dest_temp);
	else if (dest_temp < src_temp)
	{
		i = -1;
		while (++i < len)
			dest_temp[i] = src_temp[i];
	}
	else
	{
		len_temp = len;
		while (--len_temp >= 0)
			dest_temp[len_temp] = src_temp[len_temp];
	}
	return (dst);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    // Test case 1: Passing NULL as the src pointer
    char *src1 = NULL;
    char dst1[10] = "abcdefghi";
    ft_memmove(dst1, src1, 5);
    printf("Test case 1: %s\n", dst1);
    
    // Test case 2: Passing overlapping src and dst pointers with different offsets
    char src2[] = "1234567890";
    char dst2[] = "abcdefghi";
    ft_memmove(dst2+3, src2+2, 5);
    printf("Test case 2: %s\n", dst2);
    
    // Test case 3: Passing non-overlapping src and dst pointers
    char src3[] = "1234567890";
    char dst3[11];
    ft_memmove(dst3, src3, 10);
    printf("Test case 3: %s\n", dst3);
    
    // Test case 4: Passing a length of 0
    char src4[] = "1234567890";
    char dst4[11];
    ft_memmove(dst4, src4, 0);
    printf("Test case 4: %s\n", dst4);
    
    // Test case 5: Passing a length greater than the size of the source data
    char src5[] = "1234567890";
    char dst5[11];
    ft_memmove(dst5, src5, 15);
    printf("Test case 5: %s\n", dst5);
	
    // Test case 6: Passing NULL as the src pointer and dst pointer
    char *src6 = NULL;
    char *dst6 = NULL;
    ft_memmove(dst6, src6, 5);
    printf("Test case 1: %s\n", dst6);

    return (0);
}
