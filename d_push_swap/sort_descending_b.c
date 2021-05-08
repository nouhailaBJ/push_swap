/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_descending_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:59:49 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/04 15:59:50 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_descending_b(t_stack **stack, int max)
{
	int	index;
	int	proximity;

	index = index_max((*stack), max);
	proximity = get_proximity(stack_size(*stack) / 2);
	if (proximity > index && *stack)
	{
		ft_rotate(stack);
		write(1, "rb\n", 3);
	}
	else if (*stack)
	{
		ft_reverse_rotate(stack);
		write(1, "rrb\n", 4);
	}
}
