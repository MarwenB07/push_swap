/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:44:54 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 23:29:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* take the size of my string */

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/* take all size of my **argv for my malloc of my char *str */

int	take_size(int argc, char **argv)
{
	int	i;
	int	size;

	i = 1;
	size = 0;
	while (argc > i)
	{
		size += ft_strlen(argv[i]) + 1;
		i++;
	}
	return (size);
}

/* take all of **argv to make one string with ' ' in end of one word */

char	*link_tab(int argc, char **argv, t_swap *s)
{
	int		i;
	int		j;
	int		count;
	int		size;
	char	*str;

	i = 0;
	j = 0;
	count = 1;
	size = take_size(argc, argv);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		exit_swap(s);
	while (argc > count)
	{
		j = 0;
		while (argv[count][j])
			str[i++] = argv[count][j++];
		str[i++] = ' ';
		count++;
	}
	str[i] = '\0';
	return (str);
}

/* check if the number list have only number */

void	check_tab_is_correct(char **tab, t_swap *swap)
{
	int	i;
	int	test;

	test = 0;
	i = -1;
	while (tab[++i])
	{
		test = ft_isdigit(tab[i], swap);
		if (test == -42)
			exit_swap4(swap, tab, 0);
	}
}

/* ft_atoi you know ... */

long int	ft_atoi(char *str, t_swap *swap)
{
	int			i;
	int			sign;
	long int	result;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '+')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	result = result * sign;
	if (result <= 2147483647 && result >= -2147483648)
		return (result);
	return (exit_swap(swap));
}
