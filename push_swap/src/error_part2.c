/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_part2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:25:16 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/18 13:29:50 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	exit_swap_na(t_swap *swap)
{
	free(swap->a);
	free(swap->b);
	free(swap);
	ft_putstr_error("Error\n");
	exit(0);
}

int	exit_swap_nb(t_swap *swap)
{
	free(swap->a);
	free(swap->b);
	free(swap->na);
	free(swap);
	ft_putstr_error("Error\n");
	exit(0);
}

int	exit_swap_tab(t_swap *swap)
{
	free(swap->a);
	free(swap->b);
	free(swap->na);
	free(swap->nb);
	free(swap);
	ft_putstr_error("Error\n");
	exit(0);
}

int	exit_swap6(t_swap *swap, char **tab)
{
	int	i;
	int	y;

	i = 0;
	y = swap->size;
	while (i < y)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	free(swap->a);
	free(swap->b);
	free(swap->na);
	free(swap->nb);
	free(swap->tab);
	free(swap);
	exit(0);
}
