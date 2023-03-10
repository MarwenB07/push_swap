/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 06:58:07 by marvin            #+#    #+#             */
/*   Updated: 2023/01/18 13:40:47 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* to know the order */

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	if (ft_strlen2(a) != ft_strlen2(b))
		return (0);
	while (a[i])
	{
		if (a[i] != b[i])
			return (0);
		i++;
	}
	return (1);
}

/* check my order */

void	order_check(char *cmd, t_check *c)
{
	if (ft_strcmp(cmd, "sa\n"))
		sa(c);
	else if (ft_strcmp(cmd, "sb\n"))
		sb(c);
	else if (ft_strcmp(cmd, "ss\n"))
		ss(c);
	else if (ft_strcmp(cmd, "pb\n"))
		pb(c);
	else if (ft_strcmp(cmd, "pa\n"))
		pa(c);
	else if (ft_strcmp(cmd, "ra\n"))
		ra(c);
	else if (ft_strcmp(cmd, "rb\n"))
		rb(c);
	else if (ft_strcmp(cmd, "rr\n"))
		rr(c);
	else if (ft_strcmp(cmd, "rra\n"))
		rra(c);
	else if (ft_strcmp(cmd, "rrb\n"))
		rrb(c);
	else if (ft_strcmp(cmd, "rrr\n"))
		rrr(c);
	else
		error(c);
}

/* read order thank's to my gnl, fd = 0 to read in computer terminal */

/* to stop sending orders, you can press Ctrl + D */

void	order_input(t_check *c)
{
	char		*line;

	line = get_next_line(0);
	while (line)
	{
		order_check(line, c);
		free(line);
		line = get_next_line(0);
	}
}
