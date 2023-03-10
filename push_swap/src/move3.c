/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:44 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/17 03:32:50 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* ra */

void	ra(t_swap *swap)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < swap->size_a - 1)
	{
		tmp = swap->a[i];
		swap->a[i] = swap->a[i + 1];
		swap->a[i + 1] = tmp;
		i++;
	}
}

void	do_ra(t_swap *swap)
{
	if (swap->size_a > 1)
	{
		ra(swap);
		ft_putstr("ra\n");
	}
}

/* rb */

void	rb(t_swap *swap)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < swap->size_b - 1)
	{
		tmp = swap->b[i];
		swap->b[i] = swap->b[i + 1];
		swap->b[i + 1] = tmp;
		i++;
	}
}

void	do_rb(t_swap *swap)
{
	if (swap->size_b > 1)
	{
		rb(swap);
		ft_putstr("rb\n");
	}
}

/* rr */

void	do_rr(t_swap *swap)
{
	if (swap->size_b > 1 && swap->size_a > 1)
	{
		ra(swap);
		rb(swap);
		ft_putstr("rr\n");
	}
}
