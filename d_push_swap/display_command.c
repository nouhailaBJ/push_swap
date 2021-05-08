/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_command.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:29:04 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/03 14:30:31 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display_command(t_stack **a, t_stack **b, t_checker *checker, int i)
{
	if (i == 1)
	{
		ft_swap(a);
		write(1, "sa\n", 3);
	}
	else if (i == 2)
	{
		ft_swap(b);
		write(1, "sb\n", 3);
	}
	else if (i == 3)
	{
		ft_rr(checker);
		write(1, "rr\n", 3);
	}
	else if (i == 4)
	{
		ft_rotate(a);
		write(1, "ra\n", 3);
	}
	else
		display_command2(a, b, checker, i);
}

void	display_command2(t_stack **a, t_stack **b, t_checker *checker, int i)
{
	if (i == 5)
	{
		ft_rotate(b);
		write(1, "rb\n", 3);
	}
	else if (i == 6)
	{
		ft_push(a, b);
		write(1, "pa\n", 3);
	}
	else if (i == 7)
	{
		ft_push(b, a);
		write(1, "pb\n", 3);
	}
}
