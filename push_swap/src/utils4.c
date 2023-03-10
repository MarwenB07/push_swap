/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:23:41 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 23:36:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* juste to print a char c */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* juste to print movement like "sa", "ra", "pb" ... */

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

int	check_is_sort(t_swap *swap, char **tab)
{
	int	i;

	i = 0;
	while (i < swap->size_a - 1)
	{
		if (swap->a[i] < swap->a[i + 1])
			i++;
		else
			return (1);
	}
	return (exit_swap6(swap, tab));
}

/* check if i have double in my stack *a */

int	check_double(t_swap *swap, char **tab)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (swap->size == 1)
		exit_swap4(swap, tab, 1);
	while (i < swap->size)
	{
		j = i + 1;
		while (j < swap->size)
		{
			if (swap->a[i] == swap->a[j])
				return (exit_swap4(swap, tab, 0));
			j++;
		}
		i++;
	}
	check_is_sort(swap, tab);
	return (0);
}
