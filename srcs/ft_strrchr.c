/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:52:48 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/25 03:37:33 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "oogabooga";
	char	c = 'x';
	char	str1[] = "oogabooga";
	char	c1 = 'x';
	printf("%s\n", strrchr(str, c));
	printf("%s\n", ft_strrchr(str1, c1));
	return (0);
}
*/
