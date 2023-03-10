/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:23:41 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/28 14:58:37 by mbouaza          ###   ########.fr       */
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

/* check if i have double in my stack *a */

int	check_double(t_check *check, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
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
