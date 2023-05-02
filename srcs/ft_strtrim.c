/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:23:39 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/26 17:10:06 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		len;
	char	*str;

	if (!s1 || !set)
		return (0);
	len = 0;
	while (s1[len])
		len++;
	i = 0;
	while (s1[i] && s1[i] == *set)
		i++;
	while (len && s1[len - 1] == *set)
		len--;
	str = ft_substr(s1, i, len - i);
	return (str);
}
/*
int	main(void)
{
	char	str[] = "bobert";
	printf("%s", ft_strtrim(str, "b"));
	return (0);
}
*/