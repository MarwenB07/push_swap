/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:38:57 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/17 03:39:00 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* check the position of 'num' in stack *a */

int	check_position_a(t_swap *s, int num)
{
	int	i;

	i = 0;
	while (s->a[i] != num)
		i++;
	return (i);
}

/* check the position of 'num' in stack *b */

int	check_position_b(t_swap *s, int num)
{
	int	i;

	i = 0;
	while (s->b[i] != num)
		i++;
	return (i);
}

/* check target position in stack *a */

int	target_position(t_swap *s, int num)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	s->tab[0] = s->a[0];
	if (num < check_hight(s))
	{
		while (i <= s->size_a)
		{
			if (s->a[i] > num)
			{
				s->tab[y] = s->a[i];
				y++;
			}
			i++;
		}
		i = check_lowest_tab(s, s->tab, y - 1);
	}
	if (num < check_hight(s) && i == 0)
		i = check_lowest_tab(s, s->tab, y);
	return (i);
}

/* check the position of the lowest number in my stack *a */

int	check_lowest(t_swap *s)
{
	int	i;
	int	lowest;

	i = 0;
	lowest = s->a[0];
	while (i < s->size_a)
	{
		if (s->a[i] < lowest)
			lowest = s->a[i];
		i++;
	}
	return (check_position_a(s, lowest));
}

/* check the position of the highest number in my stack *a */

int	check_hight(t_swap *s)
{
	int	i;
	int	hight;

	i = 0;
	hight = s->a[i];
	while (i < s->size_a)
	{
		if (s->a[i] > hight)
			hight = s->a[i];
		i++;
	}
	return (hight);
}
