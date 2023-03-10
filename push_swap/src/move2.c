/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:42 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/17 03:32:33 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* pa */

void	pa(t_swap *swap)
{
	int	i;
	int	tmp;

	i = 0;
	swap->a[swap->size_a] = swap->b[0];
	swap->size_a++;
	swap->size_b--;
	while (i < swap->size_a)
	{
		tmp = swap->a[i];
		swap->a[i] = swap->a[swap->size_a - 1];
		swap->a[swap->size_a - 1] = tmp;
		i++;
	}
	i = 0;
	while (i < swap->size_b)
	{
		swap->b[i] = swap->b[i + 1];
		i++;
	}
}

void	do_pa(t_swap *swap)
{
	if (swap->size_b >= 1)
	{
		pa(swap);
		ft_putstr("pa\n");
	}
}

/* pb */

void	pb(t_swap *swap)
{
	int	i;
	int	tmp;

	i = 0;
	swap->b[swap->size_b] = swap->a[0];
	swap->size_b++;
	swap->size_a--;
	while (i < swap->size_b)
	{
		tmp = swap->b[i];
		swap->b[i] = swap->b[swap->size_b - 1];
		swap->b[swap->size_b - 1] = tmp;
		i++;
	}
	i = 0;
	while (i < swap->size_a)
	{
		swap->a[i] = swap->a[i + 1];
		i++;
	}
}

void	do_pb(t_swap *swap)
{
	if (swap->size_a >= 1)
	{
		pb(swap);
		ft_putstr("pb\n");
	}
}
