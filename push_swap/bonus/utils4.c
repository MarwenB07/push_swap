/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:23:41 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 22:43:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* juste to print a char c */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* juste to print "OK" or "KO" */

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i++]);
	}
}

/* check is my stack *a is sort, **tab is here because of leaks you know ... */

int	check_is_sort(t_check *check, char **tab)
{
	int	i;

	i = 0;
	while (i < check->size_a - 1)
	{
		if (check->a[i] < check->a[i + 1])
			i++;
		else
			return (1);
	}
	return (exit_swap4(check, tab, 1));
}

/* check if i have double in my stack *a */

int	check_double(t_check *check, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (check->size == 1)
		exit_swap4(check, tab, 0);
	while (i < check->size)
	{
		j = i + 1;
		while (j < check->size)
		{
			if (check->a[i] == check->a[j])
				return (exit_swap4(check, tab, 0));
			j++;
		}
		i++;
	}
	check_is_sort(check, tab);
	return (0);
}

/* check is sort remake */

int	check_sort(t_check *c)
{
	int	i;

	i = 1;
	while (i < c->size_a)
	{
		if (!(c->a[i - 1] < c->a[i]))
			return (-1);
		i++;
	}
	return (1);
}
