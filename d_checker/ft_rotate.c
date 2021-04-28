/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:54:05 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/26 17:00:11 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_lstadd_back2(t_stack **alst, t_stack *new)
{
	t_stack	*head;

	head = *alst;
	if (*alst)
	{
		while (head->next)
		{
			head = head->next;
		}
		head->next = new;
	}
	else
		*(alst) = new;
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*first_elm;
	t_stack	*tmp;

	first_elm = malloc(sizeof(t_stack));
	if (*stack)
	{
		tmp = *stack;
		first_elm->num = tmp->num;
		first_elm->next = NULL;
		tmp = tmp->next;
		ft_lstadd_back2(&tmp, first_elm);
		*stack = tmp;
	}
}
