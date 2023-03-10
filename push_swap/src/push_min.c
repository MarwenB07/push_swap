/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:53 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 23:09:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* put on the top the target number */

void	to_place(t_swap *s, int num)
{
	int	target;
	int	i;

	target = target_position(s, num);
	i = 0;
	if (check_hight(s) < num)
		target = check_position_a(s, check_hight(s)) + 1;
	if (target < (s->size_a / 2) + 1)
	{
		while (i < target)
		{
			do_ra(s);
			i++;
		}
	}
	else
	{
		i = s->size_a + 1;
		while (--i > target)
			do_rra(s);
	}
}

/* put on the top and push the number */

void	push_b(t_swap *s, int pos)
{
	int	i;

	pos = check_position_b(s, pos);
	i = 0;
	if (pos < (s->size_b / 2) + 1)
	{
		while (i < pos)
		{
			do_rb(s);
			i++;
		}
	}
	else
	{
		i = s->size_b + 1;
		while (--i > pos)
			do_rrb(s);
	}
	do_pa(s);
}

/* use to_place and push_b */

void	push_min(t_swap *s, int pos)
{
	to_place(s, pos);
	push_b(s, pos);
}

/* check the lowest number in a list of number in (int *tab) */

int	check_lowest_tab(t_swap *s, int *tab, int y)
{
	int	i;
	int	low;

	low = tab[0];
	i = 0;
	while (i < y)
	{
		if (low > tab[i])
		{
			low = tab[i];
		}
		i++;
	}
	low = check_position_a(s, low);
	return (low);
}
