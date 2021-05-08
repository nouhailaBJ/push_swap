/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_median.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:50:21 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/04 16:54:42 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	table_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_tab(int *tab, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (tab[j] > tab[j + 1])
				table_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

int 	find_median(t_stack *a, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * size);
	while (a->next)
	{
		tab[i] = a->num;
		a = a->next;
		i++;
	}
	sort_tab(tab, size);
	i = 0;
	while (i < size / 2)
		i++;
	i = tab[i];
	free(tab);
	return (i);
}
