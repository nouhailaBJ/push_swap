/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_execute.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:51:27 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/03 13:49:50 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	checker_execute(t_checker *checker)
{
	int		error;
	t_stack	*tmp;

	error = 0;
	if (checker->b)
		error = 1;
	tmp = checker->a;
	while (tmp != NULL && tmp->next)
	{
		if (tmp->num > tmp->next->num)
			error = 1;
		tmp = tmp->next;
	}
	if (error)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}
