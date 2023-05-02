/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:21:13 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/25 18:20:52 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = b;
	i = 0;
	while (len--)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[10] = "hello";
	char	str1[10] = "hello";
	int		mem = 5;

	memset(str, mem, sizeof(str));
	if (strncmp(str, "\5\5\5\5\5", mem) == 0)
		printf("test memset success to %d bytes.\n", mem);
	else
		printf("test memset failure.\n");

	ft_memset(str1, mem, sizeof(str1));
	if (strncmp(str1, "\5\5\5\5\5", mem) == 0)
		printf("ft_memset success %d bytes.\n", mem);
	else
		printf("ft_memset failure.\n");
	return (0);
}
*/