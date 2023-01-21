/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_new_pile.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:30 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 22:59:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* create a new stack identical to stack *a but the order start at 0 ... */

void	create_n_a(t_swap *s)
{
	int	i;
	int	position;
	int	count;

	i = 0;
	position = 0;
	count = 0;
	while (i < s->size_a)
	{
		count = 0;
		position = 0;
		while (position < s->size_a)
		{
			if (s->a[i] > s->a[position])
				count++;
			position++;
		}
		s->na[i] = count;
		i++;
	}
}
