/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:33:44 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/05 13:14:35 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_resolve2(int tmp, t_stack **a, t_stack **b, t_checker **checker)
{
	while (tmp && (*checker)->size_a > 2)
	{
		if ((*a)->num <= (*checker)->median)
		{
			display_command(a, b, *checker, 7);
			if ((*b)->num < find_median(*b, (*checker)->size_b)
				&& (*checker)->size_b > 1)
			{
				if ((*a)->num > (*checker)->median)
					display_command(a, b, *checker, 3);
				else
					display_command(a, b, *checker, 5);
			}
			(*checker)->size_b++;
			(*checker)->size_a--;
		}
		else
			display_command(a, b, *checker, 4);
		tmp--;
	}
}

void	ft_resolve(t_stack **a, t_stack **b, t_checker *checker)
{
	if (is_sort(*a))
		return ;
	checker->size_a = stack_size(*a);
	checker->size_b = 0;
	while (checker->size_a > 2)
	{
		checker->median = find_median(*a, checker->size_a);
		ft_resolve2(checker->size_a, a, b, &checker);
	}
	display_command(a, b, checker, 7);
	display_command(a, b, checker, 7);
	checker->size_b += 2;
	push_to_a(a, b, 0);
}
