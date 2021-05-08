/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:44:51 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/07 16:47:28 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_command(t_checker *checker, char *line)
{
	if (ft_strcmp(line, "sa") == 0)
		ft_swap(&checker->a);
	else if (ft_strcmp(line, "sb") == 0)
		ft_swap(&checker->b);
	else if (ft_strcmp(line, "ss") == 0)
		ft_ss(checker);
	else if (ft_strcmp(line, "pa") == 0)
		ft_push(&checker->a, &checker->b);
	else if (ft_strcmp(line, "pb") == 0)
		ft_push(&checker->b, &checker->a);
	else if (ft_strcmp(line, "ra") == 0)
		ft_rotate(&checker->a);
	else if (ft_strcmp(line, "rb") == 0)
		ft_rotate(&checker->b);
	else if (ft_strcmp(line, "rr") == 0)
		ft_rr(checker);
	else if (ft_strcmp(line, "rra") == 0)
		ft_reverse_rotate(&checker->a);
	else if (ft_strcmp(line, "rrb") == 0)
		ft_reverse_rotate(&checker->b);
	else if (ft_strcmp(line, "rrr") == 0)
		ft_rrr(&checker->a, &checker->b);
	else
		ft_error();
}
