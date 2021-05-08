/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:54:31 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/04 17:09:26 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int 	find_pos(int n, t_stack *list)
{
	int	pos;

	pos = 0;
	while (list->num != n)
	{
		list = list->next;
		pos++;
	}
	return (pos);
}

int 	find_min(t_stack *list)
{
	int	min;

	min = 2147483647;
	while (list->next)
	{
		if (list->num < min)
			min = list->num;
		list = list->next;
	}
	if (list->num < min)
		min = list->num;
	return (min);
}

void	push_b(int size, t_stack **list_a, t_stack **list_b)
{
	int		j;
	int		i;

	i = 0;
	while (i++ < 2)
	{
		j = 0;
		if (find_pos(find_min(*list_a), *list_a) < size / 2)
			j = 1;
		while ((*list_a)->num != find_min(*list_a))
		{
			if (j)
			{
				ft_rotate(list_a);
				write(1, "ra\n", 3);
			}
			else
			{
				ft_reverse_rotate(list_a);
				write(1, "rra\n", 4);
			}
		}
		ft_push(list_b, list_a);
		write(1, "pb\n", 3);
	}
}
