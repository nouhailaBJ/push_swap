/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:05:45 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/28 17:00:29 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
}

void	ft_checker(t_checker *checker)
{
	check_arguments(checker);
	stock_numbers(checker);
	dubplicate_numbers(checker);
	get_cmd(checker);
	checker_execute(checker);
}

int 	main(int argc, char **argv)
{
	t_checker	checker;

	if (argc > 1)
	{
		initialise_checker(&checker, argv);
		ft_checker(&checker);
	}
	return (1);
}
