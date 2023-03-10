/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 02:38:35 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/18 16:33:40 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* include */

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* struct */

typedef struct s_swap
{
	int		*a;
	int		*b;
	int		*na;
	int		*nb;
	int		*tab;
	int		size;
	int		size_a;
	int		size_b;
	int		size_na;
	int		size_nb;
	int		count;
	int		move;
	int		move2;
}				t_swap;

/* create_a */

void		make_a(t_swap *swap, int argc, char **argv);

/* utils */

void		init_struct(t_swap *swap, int w);
void		ft_putchar_error(char c);
void		ft_putstr_error(char *s);

/* utils2 */

int			ft_strlen(char *s);
int			take_size(int argc, char **argv);
char		*link_tab(int argc, char **argv, t_swap *s);
long int	ft_atoi(char *str, t_swap *swap);
void		check_tab_is_correct(char **tab, t_swap *swap);

/* utils3 */

int			ft_isdigit(char *s, t_swap *swap);
char		**ft_split(char *s, char c);

/* utils4 */

void		ft_putchar(char c);
void		ft_putstr(char *s);
int			check_is_sort(t_swap *swap, char **tab);
int			check_double(t_swap *swap, char **tab);

/* utils5 */

int			check_position_in_a(t_swap *s);
int			check_position_in_b(t_swap *s);

// void		common_move(t_swap *s); //

/* move */

void		sa(t_swap *swap);
void		do_sa(t_swap *swap);

void		sb(t_swap *swap);
void		do_sb(t_swap *swap);

void		do_ss(t_swap *swap);

/* move2 */

void		pa(t_swap *swap);
void		do_pa(t_swap *swap);

void		pb(t_swap *swap);
void		do_pb(t_swap *swap);

/* move3 */

void		ra(t_swap *swap);
void		do_ra(t_swap *swap);

void		rb(t_swap *swap);
void		do_rb(t_swap *swap);

void		do_rr(t_swap *swap);

/* move4 */

void		rra(t_swap *swap);
void		do_rra(t_swap *swap);

void		rrb(t_swap *swap);
void		do_rrb(t_swap *swap);

void		do_rrr(t_swap *swap);

/* sort */

void		sort_complete(t_swap *s);
void		sort_for_3(t_swap *s);
void		sort_for_4(t_swap *s);
void		sort_for_5(t_swap *s);

/* error */

int			exit_swap(t_swap *swap);
int			exit_swap_a(t_swap *swap);
int			exit_swap_b(t_swap *swap);
int			exit_swap4(t_swap *swap, char **tab, int choice);

/* sort_utils */

int			check_second(t_swap *s, int first);
int			check_third(t_swap *s, int first, int second);
void		find_big_3b(t_swap *s);

/* sort_utils2 */

void		sort_for_3_remix(t_swap *s);
int			check_second_a(t_swap *s, int first);
int			check_third_a(t_swap *s, int first, int second);
void		find_big_3a(t_swap *s);

/* sort_all */

void		sort_all(t_swap *s);

/* sort_all_2 */

int			check_position_a(t_swap *s, int num);
int			check_position_b(t_swap *s, int num);
int			target_position(t_swap *s, int num);
int			check_lowest(t_swap *s);
int			check_hight(t_swap *s);

/* create_new_pile */

void		create_n_a(t_swap *s);

/* move_na */

void		pb_n(t_swap *swap);
void		ra_n(t_swap *swap);
void		rra_n(t_swap *swap);

/* cost */

int			cost_b(t_swap *s, int num);
int			cost_a(t_swap *s, int num);

/* push_min */

void		push_b(t_swap *s, int pos);
void		to_place(t_swap *s, int num);
void		push_min(t_swap *s, int pos);
int			check_lowest_tab(t_swap *s, int *tab, int y);

/* error_part2 */

int			exit_swap_na(t_swap *swap);
int			exit_swap_nb(t_swap *swap);
int			exit_swap_tab(t_swap *swap);
int			exit_swap6(t_swap *swap, char **tab);

#endif
