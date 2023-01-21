/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:26:08 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/17 03:37:06 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* sort for 3 */

void	sort_for_3(t_swap *s)
{
	if (s->a[2] > s->a[0] && s->a[0] > s->a[1])
		do_sa(s);
	else if (s->a[0] > s->a[2] && s->a[1] > s->a[0])
		do_rra(s);
	else if (s->a[1] > s->a[0] && s->a[1] > s->a[2])
	{
		do_rra(s);
		do_sa(s);
	}
	else if (s->a[0] > s->a[1] && s->a[1] > s->a[2])
	{
		do_sa(s);
		do_rra(s);
	}
	else if (s->a[0] > s->a[1] && s->a[2] > s->a[1])
		do_ra(s);
}

/* sort for 4 */

void	sort_for_4(t_swap *s)
{
	int	i;
	int	num;

	i = -1;
	num = 0;
	while (++i < s->size_a)
		if (s->a[i] < s->a[num])
			num = i;
	i = -1;
	if (num <= s->size_a / 2)
		while (++i < num)
			do_ra(s);
	else if (num > s->size_a / 2)
	{
		i = s->size_a + 1;
		while (--i > num)
			do_rra(s);
	}
	do_pb(s);
	sort_for_3(s);
	do_pa(s);
}

/* sort for 5 */

void	sort_for_5(t_swap *s)
{
	int	i;
	int	num;

	i = -1;
	num = check_lowest(s);
	if (num < s->size_a / 2 + 1)
		while (++i < num)
			do_ra(s);
	else
	{
		i = s->size_a + 1;
		while (--i > num)
			do_rra(s);
	}
	do_pb(s);
	sort_for_4(s);
	do_pa(s);
}

void	sort_complete(t_swap *s)
{
	if (s->size_a == 2)
	{
		do_sa(s);
	}
	else if (s->size_a == 3)
		sort_for_3(s);
	else if (s->size_a == 4)
	{
		sort_for_4(s);
	}
	else if (s->size_a == 5)
	{
		sort_for_5(s);
	}
	else
		sort_all(s);
}
