/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:53:58 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/04 15:54:12 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sort(t_stack *list_a)
{
	while (list_a->next)
	{
		if (list_a->num > list_a->next->num)
			return (0);
		list_a = list_a->next;
	}
	return (1);
}
