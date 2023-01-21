/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:22:08 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/18 16:31:21 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* push half number of my stack *a in stack *b (the half is the smallest),
   then push the rest until there are only 3 number left and sort them */

static void	step_1(t_swap *s)
{
	int	i;
	int	count;

	i = 0;
	count = s->size_a / 2;
	while (s->size_a > count)
	{
		if (s->na[i] <= count)
		{
			pb_n(s);
			do_pb(s);
		}
		else
		{
			do_ra(s);
			ra_n(s);
		}
	}
	while (s->size_a > 3)
		do_pb(s);
	sort_for_3(s);
}

/* take cost a + cost b for all number to know how number is the most worth 
   and restart the process until stack a is empty */

static void	step_2(t_swap *s)
{
	int	i;
	int	cost;
	int	cost1;
	int	position;

	i = 0;
	cost = 0;
	cost1 = 0;
	position = 0;
	while (0 < s->size_b)
	{
		i = -1;
		position = 0;
		cost1 = (cost_a(s, s->b[0]) + cost_b(s, s->b[0]));
		while (++i < s->size_b)
		{
			cost = (cost_a(s, s->b[i]) + cost_b(s, s->b[i]));
			if (cost1 > cost)
			{
				cost1 = cost;
				position = i;
			}
		}
		push_min(s, s->b[position]);
	}
}

/* raise the smaller number to the top */

static void	step_3(t_swap *s)
{
	int	lowest;
	int	i;

	i = -1;
	lowest = check_lowest(s);
	if (lowest > (s->size_a / 2) + 1)
	{
		i = s->size_a + 1;
		while (--i > lowest)
		{
			do_rra(s);
		}
	}
	else
	{
		while (++i < lowest)
			do_ra(s);
	}
}

/* make all step */

void	sort_all(t_swap *s)
{
	step_1(s);
	step_2(s);
	step_3(s);
}
