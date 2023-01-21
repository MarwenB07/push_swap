/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:25 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 22:56:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* count all number to know how many number i have */

int	count_w_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

/* split all number to give it to my int *a */

void	make_a(t_swap *swap, int argc, char **argv)
{
	char	*s;
	char	**tab;
	int		i;

	tab = NULL;
	s = NULL;
	i = -1;
	s = link_tab(argc, argv, swap);
	if (!s)
		exit_swap_tab(swap);
	tab = ft_split(s, ' ');
	free(s);
	if (!tab)
		exit_swap_tab(swap);
	check_tab_is_correct(tab, swap);
	init_struct(swap, count_w_tab(tab));
	while (++i < count_w_tab(tab))
		swap->a[i] = ft_atoi(tab[i], swap);
	check_double(swap, tab);
	create_n_a(swap);
	i = 0;
	while (i < swap->size)
		free(tab[i++]);
	free(tab);
}
