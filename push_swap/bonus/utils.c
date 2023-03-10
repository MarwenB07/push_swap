/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:26:23 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/19 22:31:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* init my struct */

void	init_struct(t_check *check, int w)
{
	check->a = malloc(sizeof(int) * w);
	if (!check->a)
		exit_swap_a(check);
	check->b = malloc(sizeof(int) * w);
	if (!check->b)
		exit_swap_b(check);
	check->size = w;
	check->size_a = w;
	check->size_b = 0;
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

/* free all stack and my struct */

void	free_end(t_check *check)
{
	free(check->a);
	free(check->b);
	free(check);
}
