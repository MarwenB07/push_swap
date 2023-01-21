/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:57 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 14:44:38 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* main */

int	main(int argc, char **argv)
{
	int		i;
	t_check	*check;

	i = 0;
	check = malloc(sizeof(t_check));
	if (!check)
		return (0);
	if (argc <= 1)
		return (exit_swap(check));
	make_a(check, argc, argv);
	order_input(check);
	if (check->size_b == 0 && check->size_a && check_sort(check) == 1)
		ft_putstr("\033[1;32mOK\n");
	else
		ft_putstr("\033[1;31mKO\n");
	free_end(check);
	return (0);
}
