/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dubplicate_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:51:09 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/28 15:56:26 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_duplicate(t_checker *checker, int num)
{
	t_stack	*current;
	int		count;

	count = 0;
	current = checker->a;
	while (current != NULL)
	{
		if (current->num == num)
			count++;
		current = current->next;
	}
	if (count > 1)
		ft_error();
}

void	dubplicate_numbers(t_checker *checker)
{
	t_stack	*current;

	current = checker->a;
	while (current != NULL)
	{
		check_duplicate(checker, current->num);
		current = current->next;
	}
}
