/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:40 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 22:17:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* all move did'nt print anything like push_swap move */

/* sa */

void	sa(t_check *check)
{
	int	tmp;

	tmp = 0;
	if (check->size_a > 1)
	{
		tmp = check->a[0];
		check->a[0] = check->a[1];
		check->a[1] = tmp;
	}
}

/* sb */

void	sb(t_check *check)
{
	int	tmp;

	tmp = 0;
	if (check->size_b > 1)
	{
		tmp = check->b[0];
		check->b[0] = check->b[1];
		check->b[1] = tmp;
	}
}

/* ss */

void	ss(t_check *check)
{
	if (check->size_b > 1 && check->size_b > 1)
	{
		sa(check);
		sb(check);
	}
}

/* pa */

void	pa(t_check *check)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	if (check->size_b >= 1)
	{
		check->a[check->size_a] = check->b[0];
		check->size_a++;
		check->size_b--;
		while (i < check->size_a)
		{
			tmp = check->a[i];
			check->a[i] = check->a[check->size_a - 1];
			check->a[check->size_a - 1] = tmp;
			i++;
		}
		i = 0;
		while (i < check->size_b)
		{
			check->b[i] = check->b[i + 1];
			i++;
		}
	}
}

/* pb */

void	pb(t_check *check)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	if (check->size_a >= 1)
	{
		check->b[check->size_b] = check->a[0];
		check->size_b++;
		check->size_a--;
		while (i < check->size_b)
		{
			tmp = check->b[i];
			check->b[i] = check->b[check->size_b - 1];
			check->b[check->size_b - 1] = tmp;
			i++;
		}
		i = 0;
		while (i < check->size_a)
		{
			check->a[i] = check->a[i + 1];
			i++;
		}
	}
}
