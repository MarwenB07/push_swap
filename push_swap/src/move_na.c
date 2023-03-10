/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_na.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:37 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 23:06:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* identical move like pb, juste for the stack *na */

void	pb_n(t_swap *swap)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	if (swap->size_a >= 1)
	{
		swap->nb[swap->size_nb] = swap->na[0];
		swap->size_nb++;
		swap->size_na--;
		while (i < swap->size_nb)
		{
			tmp = swap->nb[i];
			swap->nb[i] = swap->nb[swap->size_nb - 1];
			swap->b[swap->size_nb - 1] = tmp;
			i++;
		}
		i = 0;
		while (i < swap->size_na)
		{
			swap->na[i] = swap->na[i + 1];
			i++;
		}
	}
}

/* ra for stack *na */

void	ra_n(t_swap *swap)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	if (swap->size_na > 1)
	{
		while (i < swap->size_na - 1)
		{
			tmp = swap->na[i];
			swap->na[i] = swap->na[i + 1];
			swap->na[i + 1] = tmp;
			i++;
		}
	}
}

/* rra for stack *na */

void	rra_n(t_swap *swap)
{
	int	i;
	int	tmp;
	int	size;

	i = 0;
	tmp = 0;
	if (swap->size_a > 1)
	{
		size = swap->size_na - 1;
		while (size > i)
		{
			tmp = swap->na[size];
			swap->na[size] = swap->na[size - 1];
			swap->na[size - 1] = tmp;
			size--;
		}
	}
}
