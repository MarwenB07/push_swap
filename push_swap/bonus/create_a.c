/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:25 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 22:13:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* count all number to know how many number i have */

int	count_w_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

/* split all number to give it to my stack *a */

void	make_a(t_check *check, int argc, char **argv)
{
	char	*s;
	char	**tab;
	int		i;

	tab = NULL;
	i = 0;
	s = link_tab(argc, argv, check);
	if (!s)
		exit_swap_a(check);
	tab = ft_split(s, ' ');
	free(s);
	if (!tab)
		exit_swap_a(check);
	check_tab_is_correct(tab, check);
	init_struct(check, count_w_tab(tab));
	while (i < count_w_tab(tab))
	{
		check->a[i] = ft_atoi(tab[i], check);
		i++;
	}
	check_double(check, tab);
	free(tab);
}
