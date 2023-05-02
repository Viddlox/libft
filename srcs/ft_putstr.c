/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:53:57 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/22 19:19:18 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr(const char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		write(1, &s[i], 1);
}
/*
int	main(void)
{
	ft_putstr("Daniel Peter Cheng");
	return (0);
}
*/