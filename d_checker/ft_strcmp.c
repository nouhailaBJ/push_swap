/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbjaghou <nbjaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:49:00 by nbjaghou          #+#    #+#             */
/*   Updated: 2021/04/28 16:34:29 by nbjaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(char *str1, char *str2)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(str1);
	while (n--)
	{
		if (str1[i] == str2[i] && str1[i] && str2[i])
			i++;
		else
			return (str1[i] - str2[i]);
	}
	return (0);
}
