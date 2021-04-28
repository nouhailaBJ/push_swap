/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   apply_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:44:51 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/28 16:30:24 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	apply_command(t_checker *checker, char *line)
{
	if (strcmp(line, "sa") == 0)
		ft_swap(&checker->a);
	else if (strcmp(line, "sb") == 0)
		ft_swap(&checker->b);
	else if (strcmp(line, "ss") == 0)
		ft_ss(checker);
	else if (strcmp(line, "pa") == 0)
		ft_push(&checker->a, &checker->b);
	else if (strcmp(line, "pb") == 0)
		ft_push(&checker->b, &checker->a);
	else if (strcmp(line, "ra") == 0)
		ft_rotate(&checker->a);
	else if (strcmp(line, "rb") == 0)
		ft_rotate(&checker->b);
	else if (strcmp(line, "rr") == 0)
		ft_rr(checker);
	else if (strcmp(line, "rra") == 0)
		ft_reverse_rotate(&checker->a);
	else if (strcmp(line, "rrb") == 0)
		ft_reverse_rotate(&checker->b);
	else if (strcmp(line, "rrr") == 0)
		ft_rrr(&checker->a, &checker->b);
	else
		ft_error();
}
