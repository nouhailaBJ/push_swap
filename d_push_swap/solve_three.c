/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_three.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:13:55 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/05 13:36:18 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	get_last_num(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->num);
}

void	solve_three(t_stack **a, t_stack **b)
{
	int	last_num;

	while (!is_sort(*a))
	{
		last_num = get_last_num(*a);
		if ((*a)->next->num < (*a)->num)
		{
			ft_swap(a);
			write(1, "sa\n", 3);
		}
		else if (last_num < (*a)->num)
		{
			ft_reverse_rotate(a);
			write(1, "rra\n", 4);
		}
		else if ((*a)->next->num > last_num)
		{
			ft_reverse_rotate(a);
			write(1, "rra\n", 4);
		}
	}
}
