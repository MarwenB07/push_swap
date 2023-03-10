/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:44 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/18 13:38:31 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* rra */

void	rra(t_check *check)
{
	int	i;
	int	tmp;
	int	size;

	i = 0;
	tmp = 0;
	size = 0;
	if (check->size_a > 1)
	{
		size = check->size_a - 1;
		while (size > i)
		{
			tmp = check->a[size];
			check->a[size] = check->a[size - 1];
			check->a[size - 1] = tmp;
			size--;
		}
	}
}

/* rrb */

void	rrb(t_check *check)
{
	int	i;
	int	tmp;
	int	size;

	i = 0;
	tmp = 0;
	size = 0;
	if (check->size_b > 1)
	{
		size = check->size_b - 1;
		while (size > i)
		{
			tmp = check->b[size];
			check->b[size] = check->b[size - 1];
			check->b[size - 1] = tmp;
			size--;
		}
	}
}

/* rrr */

void	rrr(t_check *check)
{
	if (check->size_b > 1 && check->size_a > 1)
	{
		rra(check);
		rrb(check);
	}
}
