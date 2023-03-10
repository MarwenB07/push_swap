/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:33:20 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 23:07:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* rra */

void	rra(t_swap *swap)
{
	int	i;
	int	tmp;
	int	size;

	i = 0;
	tmp = 0;
	size = swap->size_a - 1;
	while (size > i)
	{
		tmp = swap->a[size];
		swap->a[size] = swap->a[size - 1];
		swap->a[size - 1] = tmp;
		size--;
	}
}

void	do_rra(t_swap *swap)
{
	if (swap->size_a > 1)
	{
		rra(swap);
		ft_putstr("rra\n");
	}
}

/* rrb */

void	rrb(t_swap *swap)
{
	int	i;
	int	tmp;
	int	size;

	i = 0;
	tmp = 0;
	size = swap->size_b - 1;
	while (size > i)
	{
		tmp = swap->b[size];
		swap->b[size] = swap->b[size - 1];
		swap->b[size - 1] = tmp;
		size--;
	}
}

void	do_rrb(t_swap *swap)
{
	if (swap->size_b > 1)
	{
		rrb(swap);
		ft_putstr("rrb\n");
	}
}

/* rrr */

void	do_rrr(t_swap *swap)
{
	if (swap->size_b > 1 && swap->size_a > 1)
	{
		rra(swap);
		rrb(swap);
		ft_putstr("rrr\n");
	}
}
