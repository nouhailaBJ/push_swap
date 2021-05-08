/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stock_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:38:00 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/07 17:23:44 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_numbers(t_checker *checker, char *str, int i)
{
	str = ft_strjoin(str, " ");
	while (checker->argv[++i])
	{
		str = ft_strjoin(str, checker->argv[i]);
		str = ft_strjoin(str, " ");
	}
	return (str);
}

void	free_tab(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	tab[i] = NULL;
	free(tab);
}

void	stock_numbers(t_checker *checker)
{
	int		i;
	char	*str;
	char	**tab;
	t_stack	*tmp;

	i = 1;
	str = ft_strdup(checker->argv[i]);
	str = join_numbers(checker, str, i);
	tab = ft_split(str, ' ');
	free(str);
	i = 0;
	checker->a = (t_stack *)malloc(sizeof(t_stack));
	checker->a->num = ft_push_atoi(checker, tab[i]);
	tmp = checker->a;
	while (tab[++i])
	{
		tmp->next = (t_stack *)malloc(sizeof(t_stack));
		tmp = tmp->next;
		tmp->num = ft_push_atoi(checker, tab[i]);
	}
	tmp->next = NULL;
	free_tab(tab);
}
