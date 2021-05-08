/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:54:05 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/06 17:21:51 by nbjaghou         ###   ########.fr       */
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
		free(tmp);
		first_elm->num = (*stack)->num;
		first_elm->next = NULL;
		tmp = (*stack)->next;
		ft_lstadd_back2(&tmp, first_elm);
		*stack = tmp;
	}
	else
		free(first_elm);
}
