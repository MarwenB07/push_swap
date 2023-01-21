/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:26:23 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/18 16:27:00 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* init my struct */

void	init_struct(t_swap *swap, int w)
{
	swap->a = malloc(sizeof(int) * w);
	if (!swap->a)
		exit_swap_a(swap);
	swap->b = malloc(sizeof(int) * w);
	if (!swap->b)
		exit_swap_b(swap);
	swap->na = malloc(sizeof(int) * w);
	if (!swap->na)
		exit_swap_na(swap);
	swap->nb = malloc(sizeof(int) * w);
	if (!swap->nb)
		exit_swap_nb(swap);
	swap->tab = malloc(sizeof(int) * w);
	if (!swap->tab)
		exit_swap_tab(swap);
	swap->size_a = w;
	swap->count = 0;
	swap->size_na = w;
	swap->size_nb = 0;
	swap->size_b = 0;
	swap->size = w;
	swap->move = 0;
	swap->move2 = 0;
}

/* ft_putchar in error exit */

void	ft_putchar_error(char c)
{
	write(2, &c, 1);
}

/* ft_putstr in error exit */

void	ft_putstr_error(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_error(s[i++]);
	}
}
