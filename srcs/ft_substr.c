/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:06:40 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/26 17:10:09 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	s_len;

	str = malloc(sizeof(char *) * (len + 1));
	if (!str || !s)
		return (0);
	if (!str)
		return (0);
	i = start;
	j = 0;
	s_len = 0;
	while (s[s_len])
		s_len++;
	while (i < s_len && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}
/*
int	main(void)
{
	char 	str[] = "Hello";
	printf("%s", ft_substr(str, 0, 2));
	return (0);
}
*/
