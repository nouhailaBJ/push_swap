/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:54:45 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/26 16:57:04 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	add_first(t_stack **stack, int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (new != NULL)
	{
		new->num = num;
		new->next = *stack;
		*stack = new;
	}
}

void	ft_push(t_stack **s1, t_stack **s2)
{
	if (s2 != NULL && *s2 != NULL)
	{
		add_first(s1, (*s2)->num);
		*s2 = (*s2)->next;
	}
}
