/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:42:38 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/22 19:19:04 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "XFG";
	char	dest[] = "ABC";

	printf("test before cpy: \n");
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	ft_strcpy(dest, src);

	printf("test after cpy: \n");
	printf("dest: %s\n", ft_strcpy(dest, src));
}
*/
