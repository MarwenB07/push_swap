/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:42 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/18 13:38:12 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* ra */

void	ra(t_check *check)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	if (check->size_a > 1)
	{
		while (i < check->size_a - 1)
		{
			tmp = check->a[i];
			check->a[i] = check->a[i + 1];
			check->a[i + 1] = tmp;
			i++;
		}
	}
}

/* rb */

void	rb(t_check *check)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	if (check->size_b > 1)
	{
		while (i < check->size_b - 1)
		{
			tmp = check->b[i];
			check->b[i] = check->b[i + 1];
			check->b[i + 1] = tmp;
			i++;
		}
	}
}

/* rr */

void	rr(t_check *check)
{
	if (check->size_b > 1 && check->size_a > 1)
	{
		ra(check);
		rb(check);
	}
}
