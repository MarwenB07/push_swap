/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:10:17 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 22:56:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* predict the cost to put the target number in the top of my stack *a */

int	cost_a(t_swap *s, int num)
{
	int	i;
	int	target;

	i = 0;
	target = target_position(s, num);
	if (target < (s->size_a / 2) + 1)
	{
		while (i < target)
			i++;
	}
	else
	{
		i = s->size_a;
		while (i > target)
		{
			i--;
		}
		return (s->size_a - i + 1);
	}
	return (i);
}

/* predict the cost to put number in the top of stack *b and push it in stack *b */

int	cost_b(t_swap *s, int num)
{
	int	i;
	int	y;
	int	pos;

	i = 0;
	pos = check_position_b(s, num);
	if (pos < (s->size_b / 2) + 1)
	{
		while (i < pos)
			i++;
	}
	else
	{
		i = s->size_b;
		while (i > pos)
			i--;
		return ((s->size_b - i) + 1);
	}
	return (i + 1);
}
