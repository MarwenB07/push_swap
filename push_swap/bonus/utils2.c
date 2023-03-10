/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:44:54 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/25 00:00:22 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* take the size of my string, strlen2 because GNL you know ... */

int	ft_strlen2(char *s)
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
		size += ft_strlen2(argv[i]) + 1;
		i++;
	}
	return (size);
}

/* take all of **argv to make one string with ' ' in end of one word */

char	*link_tab(int argc, char **argv, t_check *c)
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
		exit_swap(c);
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

void	check_tab_is_correct(char **tab, t_check *check)
{
	int	i;
	int	test;

	test = 0;
	i = -1;
	while (tab[++i])
	{
		test = ft_isdigit(tab[i]);
		if (test == -42)
			exit_swap4(check, tab, 0);
	}
}

/* ft_atoi you know ... */

long int	ft_atoi(char *str, t_check *check)
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
	return (exit_swap_a(check));
}
