/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:37:53 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/05/05 13:18:54 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	atoi_spaces(const char *s)
{
	int	i;

	i = 0;
	while (s[i] == '\t'
		|| s[i] == '\n'
		|| s[i] == '\v'
		|| s[i] == '\f'
		|| s[i] == '\r'
		|| s[i] == ' ')
		i++;
	return (i);
}

int 	ft_push_atoi(t_checker *checker, const char *str)
{
	long	result;
	int		i;
	int		sign;

	sign = 1;
	i = atoi_spaces(str);
	result = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		if ((result > 2147483647 && sign == 1 )
			|| (result > 2147483648 && sign == -1))
		{
			ft_error();
			return (0);
		}
		i++;
	}
	return (result * sign);
}
