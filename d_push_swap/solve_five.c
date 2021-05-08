/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:37:40 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/04 17:07:16 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	solve_five(t_stack **list_a, t_stack **list_b)
{
	int		size;

	size = find_size(*list_a);
	if (is_sort(*list_a))
		return ;
	if (size > 3)
		push_b(size, list_a, list_b);
	solve_three(list_a, list_b);
	if (size > 3)
	{
		ft_push(list_a, list_b);
		write(1, "pa\n", 3);
		ft_push(list_a, list_b);
		write(1, "pa\n", 3);
	}
}
