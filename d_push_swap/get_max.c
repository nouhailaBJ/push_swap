/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:51:26 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/04 15:53:22 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_stack *b)
{
	int		max;
	t_stack	*tmp;

	max = 0;
	tmp = NULL;
	if (b)
	{
		max = b->num;
		tmp = b;
		while (b)
		{
			if (b->num >= max)
				max = b->num;
			b = b->next;
		}
		b = tmp;
	}
	return (max);
}
