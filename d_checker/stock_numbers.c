/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:38:00 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/26 16:12:53 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	stock_numbers(t_checker *checker)
{
	int		i;
	char	*str;
	t_stack	*tmp;

	i = 1;
	str = checker->argv[i];
	checker->a = (t_stack *)malloc(sizeof(t_stack));
	checker->a->num = ft_push_atoi(checker, str);
	tmp = checker->a;
	while (checker->argv[++i])
	{
		str = checker->argv[i];
		tmp->next = (t_stack *)malloc(sizeof(t_stack));
		tmp = tmp->next;
		tmp->num = ft_push_atoi(checker, str);
	}
	tmp->next = NULL;
}
