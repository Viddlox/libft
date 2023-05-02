/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcheng < micheng@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:10:39 by mcheng            #+#    #+#             */
/*   Updated: 2023/03/26 17:09:45 by mcheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_separator(char str, char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		if (str == c[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_count_words(char const *str, char *c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_separator(str[i], c) == 1)
			i++;
		if (str[i])
			word_count++;
		while (str[i] && ft_is_separator(str[i], c) == 0)
			i++;
	}
	return (word_count);
}

static char	*ft_strdup2(char const *str, char *c)
{
	int		i;
	char	*string;
	int		word_len;

	i = 0;
	word_len = 0;
	while (str[i] && ft_is_separator(str[i], c) == 0)
	{
		i++;
		word_len++;
	}
	string = malloc(sizeof(char) * (word_len + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		string[i] = str[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}

char	**ft_split(char const *s, char *c)
{
	char	**string;
	int		i;
	int		word_count;
	int		word;

	i = 0;
	word = 0;
	word_count = ft_count_words(&s[i], c);
	string = malloc(sizeof(char *) * (word_count + 1));
	if (!string)
		return (NULL);
	while (word < word_count)
	{
		while (ft_is_separator(s[i], c) == 1)
			i++;
		if (s[i])
		{
			string[word] = ft_strdup2(&s[i], c);
				word++;
			while (s[i] && ft_is_separator(s[i], c) == 0)
				i++;
		}
	}
	string[word] = NULL;
	return (string);
}
/*
int	main(int ac, char **av)
{
	int		i;
	char	**split;
	(void)	ac;
	split = ft_split(av[1], av[2]);
	i = 0;
	while (split[i])
	{
		printf("%s | %p\n", split[i], split[i]);
		i++;
	}
	return (0);
}
*/