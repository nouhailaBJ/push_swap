/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:31:16 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/07 17:22:05 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	check_arguments(t_checker *checker)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 1;
	str = checker->argv[i];
	while (str != NULL)
	{
		j = 0;
		while (str[j])
		{
			if (ft_isalpha(str[j]) == 1 || str[j] == '.'
				|| ((str[j]) == '-' && (str[j + 1]) == '\0')
				|| ((str[j]) == '+' && (str[j + 1]) == '\0'))
			{
				return (ft_error());
			}
			j++;
		}
		str = checker->argv[++i];
	}
	return (1);
}
