/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:06:08 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/07 17:24:33 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	ft_error(void)
{
	write(1, "Error\n", 7);
	exit(1);
	return (0);
}

void	initialise_checker(t_checker *checker, char **argv)
{
	checker->argv = argv;
	checker->a = NULL;
	checker->b = NULL;
	checker->median = 0;
	checker->size_a = 0;
	checker->size_b = 0;
}

void	ft_push_swap(t_checker *checker, int argc)
{
	check_arguments(checker);
	stock_numbers(checker);
	dubplicate_numbers(checker);
	find_instructions(checker);
	free_all(checker);
}

int 	main(int argc, char **argv)
{
	t_checker	checker;

	if (argc > 1)
	{
		initialise_checker(&checker, argv);
		ft_push_swap(&checker, argc);
	}
	return (1);
}
