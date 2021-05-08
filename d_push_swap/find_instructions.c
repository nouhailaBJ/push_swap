/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:11:22 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/05 15:21:35 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_instructions(t_checker *checker)
{
	int	len;

	len = find_size(checker->a);
	if (len == 2)
		solve_two(&checker->a);
	else if (len == 3)
		solve_three(&checker->a, &checker->b);
	else if (len == 5)
		solve_five(&checker->a, &checker->b);
	else
		ft_resolve(&checker->a, &checker->b, checker);
}
