/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:54:11 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/26 16:58:39 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	del_last(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*new;

	if (stack)
	{
		tmp = *stack;
		new = NULL;
		while (tmp->next)
		{
			new = tmp;
			tmp = tmp->next;
		}
		new->next = NULL;
	}
}

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (new != NULL && stack && *stack != NULL)
	{
		tmp = *stack;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		new->num = tmp->num;
		new->next = *stack;
		*stack = new;
		del_last(stack);
	}
}
