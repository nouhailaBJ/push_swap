/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:31:16 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/26 17:45:21 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
			if (!ft_isdigit(str[j])
				&& !(str[j] == '-' && ft_isdigit(str[j + 1]))
				&& !(str[j] == '+' && ft_isdigit(str[j + 1])))
				return (ft_error());
			j++;
		}
		str = checker->argv[++i];
	}
	return (1);
}
