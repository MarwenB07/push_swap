/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 03:38:35 by marvin            #+#    #+#             */
/*   Updated: 2023/01/18 13:26:15 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

/* include */

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line/get_next_line.h"

/* struct */

typedef struct s_check
{
	int		*a;
	int		*b;
	int		size;
	int		size_a;
	int		size_b;
}				t_check;

/* checker */

int			main(int argc, char **argv);

/* create_a */

void		make_a(t_check *check, int argc, char **argv);

/* utils */

void		init_struct(t_check *swap, int w);
void		ft_putchar_error(char c);
void		ft_putstr_error(char *s);
void		free_end(t_check *check);

/* utils2 */

int			ft_strlen2(char *s);
int			take_size(int argc, char **argv);
char		*link_tab(int argc, char **argv, t_check *c);
long int	ft_atoi(char *str, t_check *check);
void		check_tab_is_correct(char **tab, t_check *check);

/* utils3 */

int			ft_isdigit(char *s);
char		**ft_split(char *s, char c);

/* utils4 */

void		ft_putchar(char c);
void		ft_putstr(char *s);
int			check_is_sort(t_check *check, char **tab);
int			check_double(t_check *check, char **tab);
int			check_sort(t_check *c);

/* error */

int			exit_swap(t_check *check);
int			exit_swap_a(t_check *check);
int			exit_swap_b(t_check *check);
int			error(t_check *check);
int			exit_swap4(t_check *check, char **tab, int choice);

/* move */

void		sa(t_check *check);
void		sb(t_check *check);
void		ss(t_check *check);
void		pb(t_check *check);
void		pa(t_check *check);

/* move2 */

void		ra(t_check *check);
void		rb(t_check *check);
void		rr(t_check *check);

/* move3 */

void		rra(t_check *check);
void		rrb(t_check *check);
void		rrr(t_check *check);

/* order */

int			ft_strcmp(char *a, char *b);
void		order_check(char *cmd, t_check *c);
void		order_input(t_check *c);

#endif
