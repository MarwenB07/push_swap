/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouaza <mbouaza@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 03:25:32 by mbouaza           #+#    #+#             */
/*   Updated: 2023/01/17 03:31:53 by mbouaza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

/* for push_swap.c if argv[1] isn't right */

int	exit_swap(t_check *check)
{
	free(check);
	exit(0);
}

/* if i have an error */

int	exit_swap_a(t_check *check)
{
	free(check);
	ft_putstr_error("Error\n");
	exit(0);
}

/* for my init struct if b fail */

int	exit_swap_b(t_check *check)
{
	free(check->a);
	free(check);
	ft_putstr_error("Error\n");
	exit(0);
}

/* error again */

int	error(t_check *check)
{
	free(check->a);
	free(check->b);
	free(check);
	ft_putstr_error("Error\n");
	exit(1);
}

/* if my split fail */

int	exit_swap4(t_check *check, char **tab, int choice)
{
	int	i;
	int	y;

	i = 0;
	y = check->size;
	while (i < y)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	free(check->a);
	free(check->b);
	free(check);
	if (choice == 0)
		ft_putstr_error("Error\n");
	exit(0);
}

/*

⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠉⢆⡀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⡄
⡀⠃⠨⠁⠋⣷⡀⠀⠀⠀⠀⠀⢀⡴⣾⠿⡟⢯⣟⡷⢶⣤⣀⠀⣠⡀⠀⠀⠀⢂
⠐⡠⠐⠁⣶⡟⠁⠀⠀⠀⣠⣶⣿⣼⣭⡀⠀⠄⢈⣉⣷⣬⡙⠷⣿⣆⠀⠀⠐⡀
⡂⢁⠀⢸⣿⠄⠀⠀⣴⡾⢋⣿⣤⣼⣿⣿⠠⠌⠰⣿⣤⡾⢿⣦⢛⣿⡅⠒⠠⠘
⣇⠄⡈⢄⡿⡇⢠⣞⡩⢆⣿⣙⣟⡷⣛⣧⣶⣿⣿⣝⣛⡟⠾⣍⡆⢹⣷⠁⠠⢁
⠿⣾⣆⣈⣿⠇⣿⣿⠁⠏⡀⠉⣀⣶⣿⣿⣿⣿⣿⣿⣿⣿⠀⢉⡇⣸⣿⡆⠁⠀
⠀⠀⠉⠛⠀⠀⣿⠎⡘⢠⠡⣱⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⡀⣾⢣⣽⡧⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣿⡃⠌⣂⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣷⣊⣾⡇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⢻⣧⠐⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⣉⣿⡟⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠈⣿⡌⢻⠿⠟⠻⠻⠿⢿⢿⣿⣿⣿⣿⣿⡇⣞⣽⠂⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⠻⢶⣮⣌⠡⠒⣀⠂⠄⡠⠠⠌⡙⡻⣁⣾⠏⠀⠀⠀⠀⠀
  ⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠫⢷⣶⢽⡲⣥⠷⡯⣷⢿⡛⠁⠀⠀⠀⠀⠀⠀

  			  FUCK THE LEAKS

*/
