/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:40 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/17 03:25:41 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* sa */

void	sa(t_swap *swap)
{
	int	tmp;

	tmp = swap->a[0];
	swap->a[0] = swap->a[1];
	swap->a[1] = tmp;
}

void	do_sa(t_swap *swap)
{
	if (swap->size_a > 1)
	{
		sa(swap);
		ft_putstr("sa\n");
	}
}

/* sb */

void	sb(t_swap *swap)
{
	int	tmp;

	tmp = swap->b[0];
	swap->b[0] = swap->b[1];
	swap->b[1] = tmp;
}

void	do_sb(t_swap *swap)
{
	if (swap->size_b > 1)
	{
		sb(swap);
		ft_putstr("sb\n");
	}
}

/* ss */

void	do_ss(t_swap *swap)
{
	if (swap->size_b > 1 && swap->size_b > 1)
	{
		sa(swap);
		sb(swap);
		ft_putstr("ss\n");
	}
}
