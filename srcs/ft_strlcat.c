/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:16:02 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/22 19:18:54 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	s_len = 0;
	d_len = 0;
	i = 0;
	j = 0;
	while (dest[d_len])
		d_len++;
	while (src[s_len])
		s_len++;
	if (size == 0 || size <= s_len)
		return (s_len + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	if (d_len > size)
		return (d_len + size);
	return (s_len + d_len);
}
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "ABC";
	char	dest[] = "DEF";
	char	src1[] = "ABC";
	char	dest1[] = "DEF";
	printf("%lu\n", strlcat(dest, src, 0));
	printf("%u\n", ft_strlcat(dest1, src1, 0));
	return (0);
}
*/
