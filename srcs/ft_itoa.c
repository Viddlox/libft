/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:57:17 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/25 17:10:11 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		temp;

	temp = n;
	i = 0;
	while (temp > 0)
	{
		temp /= 10;
		i++;
	}
	str = malloc(sizeof(char *) * (i + 1));
	if (!str)
		return (NULL);
	while (i--)
	{
		str[i] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(666));
}
*/