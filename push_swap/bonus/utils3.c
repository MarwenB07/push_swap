/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:26:35 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/25 00:00:50 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* to check if my argv have only number */

int	ft_isdigit(char *s)
{	
	int	i;

	i = 0;
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (-42);
	}
	return (1);
}

/* split you know ... */

// copy of substr, but can free if my malloc fail //

static char	*ft_substr_can_free(char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	while (s[i])
	{
		if (i >= start && j < len)
			str[j++] = s[i];
		i++;
	}
	str[j] = '\0';
	return (str);
}

// free all words in my **tab and free my **tab //

static void	*free_all(char **tab, int w)
{
	int	i;

	i = 0;
	while (i != w)
	{
		free (tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

// count all word without my separator //

static int	ft_count_word(char *s, char c)
{
	char	str;
	int		i;
	int		j;

	str = c;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (str == c && s[i] != c)
		{
			j++;
		}
		str = s[i];
		i++;
	}
	return (j);
}

// ft_split //

char	**ft_split(char *s, char c)
{
	char	**tab;
	int		word;
	int		i;
	int		j;

	word = 0;
	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!tab)
		return (0);
	while (s[j] && s[i] && word < ft_count_word(s, c))
	{
		i = j;
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
			j++;
		tab[word++] = ft_substr_can_free(s, i, j - i);
		if (!tab[word - 1])
			return (free_all(tab, word));
	}
	tab[word] = NULL;
	return (tab);
}
