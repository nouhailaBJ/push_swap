/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_max.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:53:49 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/04 15:53:50 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_max(t_stack *stack, int max)
{
	int	i;

	i = 1;
	while (stack)
	{
		if (stack->num == max)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}
