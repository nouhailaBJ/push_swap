/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:55:21 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/06 17:16:28 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	stack_have_max(t_stack *a, int median)
{
	while (a)
	{
		if (a->num == median)
			return (1);
		a = a->next;
	}
	return (0);
}

void	swap_a_write(t_stack **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	push_to_a(t_stack **a, t_stack **b, int max)
{
	t_stack	*tmp;

	tmp = NULL;
	while (*b)
	{
		max = get_max(*b);
		while (stack_have_max((*b), max))
		{
			max = get_max(*b);
			tmp = (*b)->next;
			while ((*b)->num != max && tmp && tmp->num == max)
				swap_a_write(b);
			while (((*b)->num != max) && *b)
				sort_descending_b(b, max);
			while (*b && (*b)->num == max)
			{
				tmp = *b;
				ft_push(a, b);
				write(1, "pa\n", 3);
				max = get_max(*b);
			}
		}
	}
}
