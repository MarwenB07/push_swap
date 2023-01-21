/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:21:52 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/17 03:22:46 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* check position of the big number in stack a to make pb */

int	check_position_in_a(t_swap *s)
{
	int	i;
	int	position;
	int	size;

	i = s->a[0];
	position = 0;
	size = 0;
	while (size < s->size_a)
	{
		if (i < s->a[size])
		{
			i = s->a[size];
			position = size;
		}
		size++;
	}
	return (position);
}

/* check position of the big number in stack b to make rrb */

int	check_position_in_b(t_swap *s)
{
	int	i;
	int	position;
	int	size;

	i = s->b[0];
	position = 0;
	size = 0;
	while (size < s->size_b)
	{
		if (i < s->b[size])
		{
			i = s->b[size];
			position = size;
		}
		size++;
	}
	return (position);
}

/* do move rr or rrr */

// avorted project hehe ... //

/*
void common_move(t_swap *s)
{
	int sizb;
	int siza;
	int i;
	int y;

	i = 0;
	y = s->size_a + 1;
	sizb = (s->size_b / 2) + 1;
	siza = (s->size_a / 2) + 1;
	if (s->move < sizb && s->move2 < siza)
	{
		while (i < s->move && i < s->move2)
		{
			do_rr(s);
			i++;
		}
	}
	else if (s->move > sizb && s->move2 > siza)
	{
		i = s->size_b + 1;
		while (--i > s->move && --y > s->move2)
			do_rrr(s);
	}
}
*/

/*
				SAD LIFE

⡐⠉⠉⠉⣑⠂⠒⠊⠉⠶⡄⠈⠉⠓⠉⠉⠁⠁⢠⠖⠦⡉⠐⠒⠒⠊⠒⠐⢒⠢
⡄⢂⡁⠸⠱⠉⡀⣁⣰⣟⠁⠀⠐⡀⢈⠐⢈⠁⠈⠘⣆⠀⠐⠈⢀⠀⠻⠣⠀⢀
⠐⡄⣁⣐⣤⣲⣴⣿⣭⣈⡙⠲⣄⠀⠂⢈⠀⣠⡶⢛⣙⣿⣦⣥⣂⣌⣐⣀⡌⡎
⣾⠝⣩⣿⣿⣿⣿⣿⣿⣟⣿⣦⠈⢳⡀⢠⡾⣣⣶⣿⣿⣿⣿⣻⣿⣿⣍⠉⢦⡁
⡟⢰⣿⣯⣿⣿⣿⣿⠀⢨⣿⣿⣷⠀⢿⣟⣰⣿⣿⣿⣿⣿⣟⠉⢹⣯⣿⣧⠀⢻
⡇⢾⡿⣽⣿⣿⣿⣿⣿⣿⣿⣯⣿⡇⢸⡇⣿⡟⣾⣿⣿⣿⣿⣶⣿⣿⣞⣿⠀⢸
⡇⢻⣷⡻⣿⣿⣿⣿⣿⣿⣿⣹⡿⢀⣿⡆⢿⣿⢽⣿⣿⣿⣿⣿⣿⡿⣻⡿⠀⣼
⣿⣀⠻⣿⣍⣟⡿⢿⣟⣛⣾⠟⣡⣾⠏⣷⡘⠿⣷⣛⠿⡿⠿⢿⣻⣼⡿⠁⣴⠟
⠈⢻⣦⣥⣋⡛⢟⠻⢛⣋⣥⡼⡟⣼⡃⡿⣹⢦⣍⡛⠿⠿⠿⠿⢛⣡⣤⠟⣿⠈
⠀⢸⡯⣝⢻⢳⠾⠶⣾⢟⡏⢇⡱⣻⡇⣧⠉⠞⡻⠷⠶⣶⠶⢶⠞⡛⠩⣰⡟⠀
⠀⢸⠇⠈⢃⠊⠁⠃⠂⢈⠐⠠⣜⣿⡀⢿⡀⠐⢀⠉⠑⣸⢿⡌⠐⠈⠀⢿⡁⠀
⠀⢸⡇⠈⠈⠃⠐⠀⢂⠀⢤⡿⠽⣿⠀⡿⠹⣆⠀⠠⢱⠏⣞⢻⡄⣞⢀⠏⠀⠀
⠀⢀⣿⡄⠰⡶⣬⡐⠀⣠⡟⡠⢙⣿⠀⡽⠀⡸⢦⠄⣿⠘⣾⣤⠇⠈⡞⡀⠀⠀
⢀⡞⠈⢧⣤⣬⣥⣄⣀⣻⢾⣥⣎⣿⠀⢼⣀⣛⣏⣤⣭⣳⣞⣉⣀⣀⠇⢸⠀⠀
⠀⠛⢾⢿⣄⣀⣤⣀⣉⣉⠳⢤⣞⡗⠀⢾⠙⣭⠖⠋⠀⠁⠉⠉⠉⣿⣶⠂⠁⠀
⠀⢀⣾⢽⣿⣿⣿⣿⢿⣿⣿⣿⣿⡇⠀⣺⣿⣿⣿⣿⣿⣿⣿⣿⣿⡧⣿⠀⠀⠀
⠀⠀⣼⢫⣿⣞⣷⣯⣟⣾⣽⣾⣽⣿⣶⣿⣯⣟⣾⣳⣯⣿⣽⣳⣯⣟⣿⠀⠀⠀
⠀⠀⡝⣠⢛⡟⠯⡿⣟⣯⣟⣷⠏⠉⠉⠉⠉⢻⡿⣟⣯⣟⢿⢏⡟⢤⣻⠀⠀⠀

I DON'T CARE PUSH_SWAP HAS BEEN VALIDATED AT 125/125

*/