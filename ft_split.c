/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaamari <ilaamari@42nice.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 01:17:12 by ilaamari          #+#    #+#             */
/*   Updated: 2025/04/12 01:17:12 by ilaamari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	count_words(const char *s, char c)
{
	unsigned long	count = 0;
	int	in_word = 0;

	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **tab, unsigned long i)
{
	while (i--)
		free(tab[i]);
	free(tab);
}

static char	**fill_split(char const *s, char c, char **tab, unsigned long count)
{
	unsigned long	i = 0, start = 0, end = 0;

	while (i < count)
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		tab[i] = ft_substr(s, start, end - start);
		if (!tab[i])
			return (free_split(tab, i), NULL);
		start = end;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	unsigned long	count;
	char			**tab;

	if (!s)
		return (0);
	count = count_words(s, c);
	tab = malloc((count + 1) * sizeof(char *));
	if (!tab)
		return (0);
	return (fill_split(s, c, tab, count));
}
